#include "main.h"

/**
 * _strlen - Prints length of a string
 *
 *@s: string input.
 *Return: i.
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
