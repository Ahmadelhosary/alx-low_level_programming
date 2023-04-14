#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
int **g;
int i;

if (width == 0 || width < 0)
return (NULL);
if (height == 0 || height < 0)
return (NULL);
**g = [height][width] = {0};
g = (int **)malloc(sizeof(int) * (height));

for (i = 0; i <= width; i++)
g[i] = (int *)malloc(sizeof(int) * (width));

if (print_grid == NULL)
return (NULL);

return (g);

}
