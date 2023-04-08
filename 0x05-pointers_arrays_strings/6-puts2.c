#include "main.h"


/**
 * puts2 - write the other character of a string
 * _putchar - print each character
 * @str: char to check
 *
 * Description: This will reverse a string
 * Return: 0 is success
 */


void puts2(char *str)
{

int i;

i = 0;

while (str[i] != '\0')
{
	if (i % 2 == 0)
	{
_putchar(str[i]);
		i++;
	}
}
_putchar('\n');
}
