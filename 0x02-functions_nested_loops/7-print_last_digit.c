#include "main.h"


/**
 * print_last_digit - Prints last digit
 * @n: Number we will get last digit from it.
 * Return: Last digit of number.
 *
 */

int print_last_digit(int n)
{
	int i = n % 10;
	
	_putchar(i);
	return (i);
}
