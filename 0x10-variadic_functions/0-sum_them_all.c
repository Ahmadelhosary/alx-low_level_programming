#include "variadic_functions.h"

/**
 * sum_them_all - summate all arguments
 * @n: number of arguments
 *
 * Return: the sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int x, sum;

x = 0, sum = 0;

	if (n == 0)
		return (0);

va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		x = va_arg(args, int);
		sum += x;
	}

va_end(args);

return (sum);
}
