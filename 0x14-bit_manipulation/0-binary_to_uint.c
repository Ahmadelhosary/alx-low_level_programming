#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Binary string.
 *
 * Return: The converted unsigned integer, or 0 if `b` is NULL or contains
 *         characters other than '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int dec = 0;

	len = strlen(b);

	if (b == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			dec = (dec << 1) | (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (dec);
}
