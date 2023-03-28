#include <stdlib.h>

/**
 * base_hndl - Handle b flag
 * @b: Unsigned int
 * @bfr: Buffer
 * @idx: Index to fill
 * @base: Base to convert to
 * Return: Length of binary output
 */
int base_hndl(unsigned int b, char *bfr, int idx, int base)
{
	int k;
	int i = 0;
	int j = 0;
	int l = 0;
	unsigned int b_clone = b;
	char *holder;

	while (b_clone > 0)
	{
		b_clone /= base;
		i++;
	}
	holder = malloc(i * sizeof(char));
	while (b > 0)
	{
		holder[j] = (b % base) + '0';
		b /= base;
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

/**
 * hexadec - Converts to hexadecimal in lowercase
 * @b: Unsinged int to convert
 * @bfr: Buffer
 * @idx: Index to fill
 * @case_flag: 'a' if lower, 'A' if upper
 * Return: Length
 */
int hexadec(unsigned int b, char *bfr, int idx, char case_flag)
{
	int k;
	int i = 0;
	int j = 0;
	int l = 0;
	int rem;
	unsigned int b_clone = b;
	char *holder;

	while (b_clone > 0)
	{
		b_clone /= 16;
		i++;
	}
	holder = malloc(i * sizeof(char));
	while (b > 0)
	{
		rem =  b % 16;
		if (rem < 10)
		{
			holder[j] = rem + '0';
		}
		else
		{
			holder[j] = rem + case_flag - 10;
		}
		b /= 16;
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

