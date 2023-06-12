#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * @size: Size of the array
 * @c: Character to initialize the array elements
 *
 * Return: Pointer to the created array, or NULL if size is 0 or fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	while (i < size)
	{
		*(str + i) = c;
		i++;
	}
	*(str + i) = '\0';

	return (str);
}
