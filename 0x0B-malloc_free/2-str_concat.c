#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
char *co;
int i, j, v, z;
int l1, l2;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

l1 = 0;
l2 = 0;
while (s1[l1] != '\0')
l1++;

while (s2[l2] != '\0')
l2++;

co = (char *)malloc(((l1 + l2)+2) * sizeof(char));

if (co == NULL)
return (NULL);

i = 0;
j = 0;
while (i < l1)
{
co[i] = s1[j];
i++;
j++;
}
z = l1;
v = 0;
while (z < (l1 + l2))
{
co[z] = s2[v];
z++;
v++;
}
co[z] = '\0';
return (co);
}
