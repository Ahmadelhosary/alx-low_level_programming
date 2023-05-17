#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */



char *_strncat(char *dest, char *src, int n)
{

char *ss = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (sizeof(dest) == n)
	{
		*dest = *src;
		dest++;
		src++;
	}
	if (sizeof(dest) < n)
	{
		*dest = '\0';
	}

	return (ss);

}
