#include "main.h"


/**
 * print_binary - Prints the binary representation of a number.
 * @n: Unsigned long integer.
 *
 * Return: None.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);  /* Right shift by 1 bit */
_putchar((n & 1) ? '1' : '0');  /* Print the least significant bit */
}
