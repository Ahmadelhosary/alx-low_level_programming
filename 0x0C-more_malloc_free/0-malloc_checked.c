#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @b: size of allocation
 * @*malloc_checked - takes size and return a pointer to allocated memory
 * Return: pointer to allocated space or 98 if failed
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);

return (ptr);
}
