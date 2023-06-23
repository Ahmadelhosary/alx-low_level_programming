#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int x;

va_list args;

va_start(args, n);

for (i = 0; i < n; ++i)
{
if (i > 0 && separator != NULL)
printf("%s ", separator);

x = va_arg(args, int);
printf("%d", x);
}

va_end(args);
printf("\n");
}
