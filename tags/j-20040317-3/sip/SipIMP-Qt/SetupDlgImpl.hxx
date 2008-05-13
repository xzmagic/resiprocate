#ifndef SETUPDLGIMP_H
#define SETUPDLGIMP_H

#include "SetupDlg.hxx"


class SetupDlgImpl : public SetupDlg
{
    Q_OBJECT

    public:
        SetupDlgImpl( QWidget* parent = 0, const char* name = 0,
		      bool modal = true, WFlags f = 0 );


	QString  mHost;
	QString  mPassword;
	QString  mUser;
	int mPort;
	QString  mProtocol;
	QString  mContact;
	QString  mKey;
	QString  mOutbound;

	virtual void updateData();
};
  
#endif // SETUPDLGIMP_H


/* ====================================================================
 * The Vovida Software License, Version 1.0 
 */
