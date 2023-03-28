#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * rot13 - Function to encode a string using rot13
 * @src: Pointer to source string
 * Return: Pointer to encoded string
 */

char *rot13(char *src)
{
	int i;
	int len;
	int alpha_check;
	int full_check;
	int m_check;

	i = 0;
	len = strlen(src);
	while (i < len)
	{
		alpha_check = isalpha(src[i]);
		m_check = 1;
		if (alpha_check && toupper(src[i]) > 'M' && toupper(src[i]) <= 'Z')
			m_check = -1;
		full_check = m_check * (alpha_check / 1024) * 13;
		src[i] = src[i] + full_check;
		i++;
	}
	return (src);
}
