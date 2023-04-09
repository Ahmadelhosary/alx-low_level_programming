#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */

void puts_half(char *str)
{
int leng;
int o;

leng = strlen(str);

for (o = leng / 2; str[o] != '\0'; o++)
{
_putchar(str[o]);
}
if (leng % 2 == 1)
{
_putchar((leng - 1) / 2);
}
_putchar('\n');
}
