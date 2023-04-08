#include "main.h"

/**
 * print_rev - print string in reverse
 *
 *@s:input string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
int len;
len = strlen(s);
int i = len - 1;

while (s[i] != '\0')
{
_putchar(s[i]);
i--;
}
}
