#include "main.h"
#include <string.h>

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
int i;
 
len = strlen(s);

while (s[i] != '\0')
{
 i = len - 1;
_putchar(s[i]);
i--;
}
}
