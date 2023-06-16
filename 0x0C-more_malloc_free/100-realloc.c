#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */



void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

char* pr = ptr;
char *arr;

int i;

if (new_size == old_size)
return (ptr);
arr = malloc(new_size * sizeof(int));

for (i = 0; i < (new_size + 1) ; i++)
{
*(arr + i) = *(pr + i);
}
*(arr + i) = '\0';

}
