#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Counts the number of bits to be flipped, get from one number to another.
 * @n: The first unsigned long int number.
 * @m: The second unsigned long int number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m;
	count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
