#include "main.h"

/**
 * _swap_int - Swaps values of two variables
 *
 *@a: first input, @b second value
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;
	*a = y;
	*b = x;
}
