#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int number to extract the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int m = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n & m) ? 1 : 0);
}
