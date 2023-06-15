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
unsigned int i, j, v, z, l1, l2;

i = 0, j = 0, v = 0, l1 = 0, l2 = 0;
z = l1;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

while (s1[l1] != '\0')
l1++;
while (s2[l2] != '\0')
l2++;
if (n < l2)
co = (char *)malloc(((l1 + n) +1) * sizeof(char));
else
co = (char *)malloc(((l1 + l2) +1) * sizeof(char));
if (co == NULL)
return (NULL);
while (i < l1)
{
co[i++] = s1[j++];
}
while (n < l2 && z < (l1 + n))
{
co[z++] = s2[v++];
}
while (n >= l2 && z < (l1 + l2))
{
co[z++] = s2[v++];
}
co[z] = '\0';
return (co);
}
