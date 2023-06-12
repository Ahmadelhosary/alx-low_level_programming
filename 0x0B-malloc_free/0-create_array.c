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

	if (size == 0)
	return (NULL);

	str = (char *)malloc(size * sizeof(char));

	if (str != NULL)
	*(str + 0) = c;

	return (str);
}

