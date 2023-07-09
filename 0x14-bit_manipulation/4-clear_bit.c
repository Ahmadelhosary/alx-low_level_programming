#include "main.h"
#include <stdio.h>
/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: Pointer to the unsigned long int variable.
 * @index: Index of the bit to be cleared.
 *
 * Return: 1 if successful, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{


	if (index >= (sizeof(unsigned long int) * 8))
	{
		/* Error: Index is out of bounds */
		return (-1);
	}


	*n &= (~(1UL << index));

	return (1);
}
