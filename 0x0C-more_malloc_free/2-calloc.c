#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory for array with known elements and size
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: void pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	memset(arr, 0, nmemb * size);

	return (arr);
}
