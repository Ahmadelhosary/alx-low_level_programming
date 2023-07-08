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
	/* Binary representation array */
	int binary[32];
	int i = 0;

	if (n == 0)
		return (-1);

	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}

	return (binary[index]);
}
