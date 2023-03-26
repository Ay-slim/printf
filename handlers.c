#include <string.h>
#include "main.h"

/**
 * string_hndl - Handle strings
 * @str: String to handle
 * Return: Number of characters
 */
int string_hndl(char *str)
{
	unsigned int i = 0;
	unsigned int len = strlen(str);

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	return (len);
}

/**
 * char_hndl - Handle chars
 * @chr: Character to handle
 * Return: 1
 */
int char_hndl(char chr)
{
	_putchar(chr);
	return (1);
}

/**
 * unknown_char_hndl - Handle unknown chars
 * @chr: Character to handle
 * Return: 2
 */
int unknown_char_hndl(char chr)
{
	_putchar('%');
	if (chr != '%')
	{
		_putchar(chr);
		return (2);
	}
	else
	{
		return (1);
	}
}

