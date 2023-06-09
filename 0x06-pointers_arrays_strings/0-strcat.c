#include "main.h"

/**
 * _strcat - concat two string
 * @dest: first string 
 * @src: second string
 * Return:pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *ss = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ss);
}
