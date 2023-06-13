#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
int **arr;
int i, j;

if (width <= 0 || height <= 0)
	return (NULL);

arr = (int **)malloc(height * sizeof(int *));

for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(width * sizeof(int));
	if (arr[i] == NULL)
	for (j = 0; j <= i; j++)
	{
		free(arr[j]);
	}
	free(arr);
	return (NULL);
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
if (arr == NULL)
	return (NULL);

return (arr);

}
