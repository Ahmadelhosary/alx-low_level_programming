#include <stdio.h>
#include "main.h"


/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, returns the number of bytes written.
 *         On error, returns -1.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

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
