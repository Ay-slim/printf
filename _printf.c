#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - Print anything
 * @format: Format
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int ret_len = 0;
	unsigned int f_len = strlen(format);
	va_list ap;
	char *buffer = malloc(1024 * sizeof(char));

	if (!format)
		return (-1);
	va_start(ap, format);
	while (i < f_len)
	{
		if (format[i] == '%' && i < f_len - 1)
		{
			ret_len += flg_handler(format[i + 1], ap, buffer, ret_len);
			i += 2;
			continue;
		}
		buffer[ret_len] = format[i];
		ret_len++;
		i++;
	}
	va_end(ap);
	write(1, buffer, ret_len);
	free(buffer);
	return (ret_len);
}

