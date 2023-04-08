#include "main.h"

/**
 * _puts - print string
 *
 *@str: string to print
 *
 *Return: void.
 */

void _puts(char *str)
{
for (*str; *str != '\0'; *str++)
{
_putchar(*str);
}
}
