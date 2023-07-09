#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int number.
 * @index: The index of the bit to be retrieved.
 *
 * Return: The value of the bit at the given index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int result;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		/* Error: Index is out of bounds */
		return -1;
	}


	result = n & (1UL << index);

	return (result != 0);
}
