#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the uppercase string
 */

char *string_toupper(char *c)
{
int i;

i = 0;

for (i = 0; i < sizeof(c)/sizeof(char); i++)
{
if (c[i] >= 97  && c[i] <= 122)
c[i] -= 32;
}
return c;
}
