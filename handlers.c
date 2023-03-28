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
 * integer_hndl - Handle integers
 * @num: integer to handle
 * @bfr: Buffer
 * @idx: Index to fill
 * Return: length
 */
int integer_hndl(int num, char *bfr, int idx)
{
	int k;
	int i = 0;
	int j = 0;
	int l = 0;
	int is_negative = 0;
	int num_clone1;
	int num_clone2;
	char *holder;

	if (num < 0)
	{
		is_negative = 1;
		num_clone1 = num * -1;
		num_clone2 = num * -1;
		bfr[idx] = '-';
	}
	else
	{
		num_clone1 = num;
		num_clone2 = num;
	}
	while (num_clone1 > 0)
	{
		num_clone1 /= 10;
		i++;
	}
	holder = malloc(i * sizeof(char));
	while (num_clone2 > 0)
	{
		holder[j] = (num_clone2 % 10) + '0';
		num_clone2 /= 10;
		j++;
	}
	for (k = i - 1; k >= 0; k--)
	{
		bfr[idx + l + is_negative] = holder[k];
		l++;
	}
	free(holder);
	return (i + is_negative);
}

