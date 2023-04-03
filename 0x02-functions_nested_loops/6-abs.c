#include "main.h"

/**
 * _abs - Prints the abs of a number.
 * @n: The number will be printed.
 *
 * Return: The same n if more or equal to zero,
 *         -1 * n if the number is less than zero.
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}

else
{
return (-1 * n);
}
}
