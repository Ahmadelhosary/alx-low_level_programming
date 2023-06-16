#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocate memory for array with known elements and size
 *
 * @nmemb: elements
 * @size: size of each elements
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

void *arr;

if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(nmemb * size);
memset(arr, 0, size);

if (arr == NULL)
return (NULL);

return (arr);
}
