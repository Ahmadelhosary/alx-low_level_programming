#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int numb, mul, pro;

	if (n >= 0 && n <= 15)
	{
		for (numb = 0; numb <= n; numb++)
		{
			_putchar('0');

			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');

				pro = numb * mul;

				if (pro <= 99)
					_putchar(' ');
				if (pro <= 9)
					_putchar(' ');

				if (pro >= 100)
				{
					_putchar((pro / 100) + '0');
					_putchar(((pro / 10)) % 10 + '0');
				}
				else if (pro <= 99 && pro >= 10)
				{
					_putchar((pro / 10) + '0');
				}
				_putchar((pro % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
