#include "main.h"

/**
 * print_sign - prints the sing of entered number
 * @n: The number that will be checked
 * Return: Eiter 1 or 0 or -1.
 */

int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n < 0)
{
printf("-");
return (-1);
}
else if (n == 0)
{
printf("0");
return (0);
}
}
