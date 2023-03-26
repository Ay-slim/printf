#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_hndl - Handle strings
 * @str: String to handle
 * @bfr: Buffer
 * @idx: Index to fill
 * Return: Number of characters
 */
int string_hndl(char *str, char *bfr, int idx)
{
	unsigned int i = 0;
	unsigned int len = strlen(str);

	while (i < len)
	{
		bfr[idx + i] = str[i];
		i++;
	}
	return (len);
}

/**
 * char_hndl - Handle chars
 * @chr: Char to handle
 * @bfr: Buffer
 * @idx: Index to fill
 * Return: 1
 */
int char_hndl(char chr, char *bfr, int idx)
{
	bfr[idx] = chr;
	return (1);
}

/**
 * unknown_char_hndl - Handle unknown chars
 * @chr: Character to handle
 * @bfr: Buffer
 * @idx: Index to fill
 * Return: 2
 */
int unknown_char_hndl(char chr, char *bfr, int idx)
{
	bfr[idx] = '%';
	if (chr != '%')
	{
		bfr[idx + 1] = chr;
		return (2);
	}
	return (1);
}

/**
 * binary_hndl - Handle b flag
 * @b: Unsigned int
 * @bfr: Buffer
 * @idx: Index to fill
 * Return: Length of binary output
 */
int binary_hndl(unsigned int b, char *bfr, int idx)
{
	int k;
	int i = 0;
	int j = 0;
	int l = 0;
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
		bfr[idx + l] = holder[k];
		l++;
	}
	free(holder);
	return (i);
}

