/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: gperf -L ANSI-C -t -k '*' -H month_hash -N in_month_word_set --compare-strncmp month.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "month.gperf"

//#include "resip/stack/DateCategory.hxx"
//#include "resip/stack/Month.hxx"

namespace resip
{
#line 8 "month.gperf"
struct months { const char *name; Month type; };

#define MONTH_TOTAL_KEYWORDS 12
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 3
#define MIN_HASH_VALUE 3
#define MONTH_MAX_HASH_VALUE 43
/* maximum key range = 41, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
month_hash (register const char *str, register unsigned int len)
{
  static unsigned char asso_values[] =
    {
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 10, 44, 44,  4, 44,
       4, 44, 44, 44,  0, 44, 44,  5, 15, 15,
      44, 44, 44, 15, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44,  5,  0, 10,
      44, 10, 44, 15, 44, 44, 44, 44,  4, 44,
       0, 15,  5, 44,  5, 44, 10,  0, 10, 44,
      44,  0, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44, 44, 44, 44, 44,
      44, 44, 44, 44, 44, 44
    };
  return len + asso_values[(unsigned char)str[2]] + asso_values[(unsigned char)str[1]] + asso_values[(unsigned char)str[0]];
}

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct months *
in_month_word_set (register const char *str, register unsigned int len)
{
  static struct months wordlist[] =
    {
      {""}, {""}, {""},
#line 15 "month.gperf"
      {"Jun", Jun},
      {""}, {""}, {""},
#line 16 "month.gperf"
      {"Jul", Jul},
#line 10 "month.gperf"
      {"Jan", Jan},
      {""}, {""}, {""}, {""},
#line 14 "month.gperf"
      {"May", May},
      {""}, {""}, {""},
#line 11 "month.gperf"
      {"Feb", Feb},
#line 12 "month.gperf"
      {"Mar", Mar},
      {""}, {""}, {""}, {""},
#line 13 "month.gperf"
      {"Apr", Apr},
      {""}, {""}, {""},
#line 21 "month.gperf"
      {"Dec", Dec},
#line 17 "month.gperf"
      {"Aug", Aug},
      {""}, {""}, {""}, {""},
#line 18 "month.gperf"
      {"Sep", Sep},
      {""}, {""}, {""}, {""},
#line 19 "month.gperf"
      {"Oct", Oct},
      {""}, {""}, {""}, {""},
#line 20 "month.gperf"
      {"Nov", Nov}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = month_hash (str, len);

      if (key <= MONTH_MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return &wordlist[key];
        }
    }
  return 0;
}
#line 22 "month.gperf"

}
