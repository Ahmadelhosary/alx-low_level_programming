#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
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

co = (char *)malloc(((l1 + l2)+1) * sizeof(char));

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
while (z < (l1 + n))
{
co[z] = s2[v];
z++;
v++;
}
co[z] = '\0';
return (co);
}
