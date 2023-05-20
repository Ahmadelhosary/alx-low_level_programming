#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 * @c: string to modify
 *
 * Return: the resulting string
 */

char *cap_string(char *c)
{
int i;

i = 0;

for (i = 0; c[i] != '\0'; i++)
{
if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == ',' || c[i] == || c[i] == '.' || c[i] == '!' || c[i] == '?' || c[i] == '"' || c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}')
{
if (c[i] >= 97 && c[i] <= 122)
c[i] -= 32;
}
}
return (c);

}
