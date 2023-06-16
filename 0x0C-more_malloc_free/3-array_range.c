#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */


int *array_range(int min, int max)
{

int *ari;
int i, size;

i = 0;
size = max - min + 1;

if (min > max)
return (NULL);

ari = (int *)malloc(size * sizeof(int));
if (ari == NULL)
return (NULL);



while (i < size)
{
ari[i] = min + i;
i++;
}

return (ari);
}
