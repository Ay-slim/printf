#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * flg_handler - Decide which handler to use
 * @flag: Format flag
 * @ap: Variadic function list variable
 * @bfr: Buffer to print to
 * @idx: Last filled buffer index
 * Return: Nothing
 */
int flg_handler(const char flag, va_list ap, char *bfr, int idx)
{
	char *valid_flags = "cdbsipuoxrXR";

	if (!strchr(valid_flags, flag))
		return (unknown_char_hndl(flag, bfr, idx));
	if (flag == 'c')
		return (char_hndl(va_arg(ap, int), bfr, idx));
	if (flag == 's')
		return (string_hndl(va_arg(ap, char*), bfr, idx));
	if (flag == 'b')
		return (base_hndl(va_arg(ap, unsigned int), bfr, idx, 2));
	if (flag == 'u')
		return (base_hndl(va_arg(ap, unsigned int), bfr, idx, 10));
	if (flag == 'o')
		return (base_hndl(va_arg(ap, unsigned int), bfr, idx, 8));
	if (flag == 'd' || flag == 'i')
		return (digit_hndl(va_arg(ap, int), bfr, idx));
	if (flag == 'x')
		return (hexadec(va_arg(ap, unsigned int), bfr, idx, 'a'));
	if (flag == 'X')
		return (hexadec(va_arg(ap, unsigned int), bfr, idx, 'A'));
	if (flag == 'R')
		return (string_hndl(rot13(va_arg(ap, char*)), bfr, idx));
	if (flag == 'r')
		return (rev_hndl((va_arg(ap, char*)), bfr, idx));
	va_end(ap);
	return (0);
}

