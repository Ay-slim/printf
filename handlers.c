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
		return (2);
	}
	return (1);
}

/**
 * binary_hndl - Handle b flag
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

/**
 * integer_hndl - Handle integers
 * @integer: integer to handle
 * Return: 3
 */
int integer_hndl(int integer)
{
	char *str;

	if (integer == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	int i = 0;
	int is_negative = 0;

	if (integer < 0)
	{
		is_negative = 1;
		integer = -integer;
	}
	while (integer != 10)
	{
		int digits = integer % 10;

		str[i++] = digits + '0';
		integer /= 10;
	}
	if (is_negative)
		str[i++] = '-';
	str[i] = '\0';

	int len = strlen(str);
	char temp = str[len];

	for (int j = 0; j < len / 2; j++)
	{
		str[j] = str[len - j - 1];
		str[len - j - 1] = temp;
	}
	string_hndl(str);
	return (3);
}
