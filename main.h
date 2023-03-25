#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int string_hndl(char *str);
int char_hndl(char chr);
int unknown_char_hndl(char chr);
int _printf(const char *format, ...);
int flg_handler(const char flag, va_list ap);

#endif
