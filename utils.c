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

