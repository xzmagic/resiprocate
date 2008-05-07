#ifndef DtlsSocket_hxx
#define DtlsSocket_hxx

#include <memory>

extern "C" 
{
#include <srtp.h>
}

#include <openssl/e_os2.h>
#include <openssl/rand.h>
#include <openssl/err.h>
#include <openssl/crypto.h>
#include <openssl/ssl.h>

namespace dtls
{

class DtlsFactory;
class DtlsSocket;
class DtlsTimer;

class DtlsSocketContext
{
   public:
      //memory is only valid for duration of callback; must be copied if queueing
      //is required 
      virtual ~DtlsSocketContext(){}      
      virtual void write(const unsigned char* data, unsigned int len)=0;
      virtual void handshakeCompleted()=0;
      virtual void handshakeFailed(const char *err)=0;

   protected:
      DtlsSocket *mSocket;
     
   private:
      friend class DtlsSocket;
     
      void setDtlsSocket(DtlsSocket *sock) {mSocket=sock;}
};

class SrtpSessionKeys
{
   public:
      unsigned char *clientMasterKey;
      int clientMasterKeyLen;
      unsigned char *serverMasterKey;
      int serverMasterKeyLen;
      unsigned char *clientMasterSalt;
      int clientMasterSaltLen;
      unsigned char *serverMasterSalt;
      int serverMasterSaltLen;
};

class DtlsSocketTimer;
   
class DtlsSocket
{
   public:
	   enum SocketType { Client, Server};
      ~DtlsSocket(); 

      bool handlePacketMaybe(const unsigned char* bytes, unsigned int len);
      
      void expired(DtlsSocketTimer*);
      
      bool checkFingerprint(const char* fingerprint, unsigned int len);
      bool getRemoteFingerprint(char *fingerprint);
      void getMyCertFingerprint(char *fingerprint);
      void startClient();
	   SocketType getSocketType() {return mSocketType;} 
      SrtpSessionKeys getSrtpSessionKeys();

      static void DtlsSocket::computeFingerprint(X509 *cert, char *fingerprint);
     
      //may return 0 if profile selection failed
      SRTP_PROTECTION_PROFILE* getSrtpProfile();      
      void createSrtpSessionPolicies(srtp_policy_t& outboundPolicy, srtp_policy_t& inboundPolicy);      
      
      bool handshakeCompleted() { return mHandshakeCompleted; }

   private:
      friend class DtlsFactory;
      void forceRetransmit();     
      DtlsSocket(std::auto_ptr<DtlsSocketContext>, DtlsFactory* factory, enum SocketType);
      void doHandshakeIteration();
      int getReadTimeout();
      
      // Internals
      std::auto_ptr<DtlsSocketContext> mSocketContext;
      DtlsFactory* mFactory;
      DtlsTimer *mReadTimer;
      
      // OpenSSL context data
      SSL *ssl;
      BIO *mInBio;
      BIO *mOutBio;
      
      SocketType mSocketType;
      bool mHandshakeCompleted;      
};


}
#endif