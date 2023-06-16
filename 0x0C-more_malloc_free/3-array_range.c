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
int r, i;

if (min > max)
return (NULL);
r = max - min;

ari = (int *)malloc((r + 1) * sizeof(int));
if (ari == NULL)
return (NULL);

i = 0;

while (i <= (r + 1))
{
ari[i] = min;
i++;
min++;
}

return (ari);
}
