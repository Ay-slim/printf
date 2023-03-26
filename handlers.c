#include <string.h>
#include <stdlib.h>
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
		return(2);
	}
	return (1);
}

/**
 * binary_handl - Handle b flag
 * @b: Unsigned int
 * Return: Length of binary output
 */
int binary_hndl(unsigned int b)
{
	int k;
	int i = 0;
	int j = 0;
	unsigned int b_clone = b;
	char *holder;

	while (b_clone > 0)
	{
		b_clone /= 2;
		i++;
	}
	holder = malloc(i * sizeof(char));
	while (b > 0)
	{
		holder[j] = (b % 2) + '0';
		b /= 2;
		j++;
	}
	for (k = i - 1; k >= 0; k--)
	{
		_putchar(holder[k]);
	}
	free(holder);
	return (i);
}

