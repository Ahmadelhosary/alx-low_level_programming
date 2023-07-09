#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: Pointer to the unsigned long int variable.
 * @index: Index of the bit to be set.
 *
 * Return: 1 if successful, -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		/* Error: Index is out of bounds */
		return (-1);
	}
	unsigned long int mask;

	mask = 1UL << index;
	*n |= mask;

	return (1);
}

