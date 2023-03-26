#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int string_hndl(char *str, char *bfr, int idx);
int char_hndl(char chr, char *bfr, int idx);
int unknown_char_hndl(char chr, char *bfr, int idx);
int _printf(const char *format, ...);
int flg_handler(const char flag, va_list ap, char *bfr, int idx);
int binary_hndl(unsigned int b, char *bfr, int idx);

#endif

