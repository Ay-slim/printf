#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int string_hndl(char *str, char *bfr, int idx);
int char_hndl(char chr, char *bfr, int idx);
int unknown_char_hndl(char chr, char *bfr, int idx);
int _printf(const char *format, ...);
int flg_handler(const char flag, va_list ap, char *bfr, int idx);
int digit_hndl(int num, char *bfr, int idx);
int base_hndl(unsigned int b, char *bfr, int idx, int base);
int hexadec(unsigned int b, char *bfr, int idx, char case_flag);
char *rot13(char *src);
int rev_hndl(char *s, char *bfr, int idx);
int unprintable(char *chr, char *bfr, int idx);
#endif

