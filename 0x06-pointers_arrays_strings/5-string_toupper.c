#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @c: string to modify
 *
 * Return: the uppercase string
 */

char *string_toupper(char *c)
{
int i;

i = 0;

for (i = 0; c[i] != '\0'; i++)
{
if (c[i] >= 97 && c[i] <= 122)
c[i] -= 32;
}
return (c);
}
