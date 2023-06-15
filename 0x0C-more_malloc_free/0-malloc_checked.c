#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *@b - size of allocation
 *
 *Return: pointer to allocated space or 98 if failed
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
return (98);
}
