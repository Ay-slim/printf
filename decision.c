#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * flg_handler - Decide which handler to use
 * @flag: Format flag
 * @ap: Variadic function list variable
 * Return: Nothing
 */
int flg_handler(const char flag, va_list ap)
{
	char *flags = "cdsipuoxX";

	if (!strchr(flags, va_arg(ap, int)))
		return (unknown_char_hndl(flag));
	if (flag == 'c')
		return (char_hndl(va_arg(ap, int)));
	if (flag == 's')
		return (string_hndl(va_arg(ap, char*)));
	va_end(ap);
	return (0);
}

