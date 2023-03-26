#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int string_hndl(char *str);
int char_hndl(char chr);
int unknown_char_hndl(char chr);
int _printf(const char *format, ...);
int flg_handler(const char flag, va_list ap);
int binary_hndl(unsigned int b);
int num_len(int num);

#endif

