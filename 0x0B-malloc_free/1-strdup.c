#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL if (Error)
 */

char *_strdup(char *str)
{
char *strt;
int i, j;
int len;

if (str == NULL)
return (NULL);

len = 0;
while (str[len] != '\0')
len++;

strt = (char *)malloc(len *sizeof(char));

if (strt == NULL)
return (NULL);

i = 0;
j = 0;
while (i < len)
{
strt[i] = str[j];
i++;
j++;
}
strt[i] = '\0';
return (strt);
}
