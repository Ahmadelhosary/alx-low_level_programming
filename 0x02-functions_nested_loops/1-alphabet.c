#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;

	}
	_putchar('\n');
}
