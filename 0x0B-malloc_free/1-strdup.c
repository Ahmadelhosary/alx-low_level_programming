#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *arr;
	int x, len;

	len = 0;

	if (str == NULL)
		return (NULL);
	
	while (str[len] != '\0')
		len++;


	arr = (char *)malloc((sizeof(char) * len) + 1);

	if (arr == NULL)
		return (NULL);
	x = 0;
	for (x = 0; x < len; x++)
	{
		arr[x] = str[x];
		arr[len] = '\0';
	}
	return (arr);
	free(arr);
}
