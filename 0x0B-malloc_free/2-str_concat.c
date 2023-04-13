#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */

char *str_concat(char *s1, char *s2)
{

char *ar1;
char *ar2;
char *con;
int x, y, len1, len2, len, c1, c2;

len1 = 0, len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
ar1 = (char *)malloc((sizeof(char) * len1)+1);
ar2 = (char *)malloc((sizeof(char) * len2)+1);
if (ar1 == NULL)
return (NULL);
if (ar2 == NULL)
return (NULL);
x = 0;
for (x = 0; x < len1; x++)
{
ar1[x] = s1[x];
ar1[len1] = '\0';
}

y = 0;
for (y = 0; y < len2; y++)
{
ar2[y] = s2[y];
ar2[len2] = '\0';
}

len = len1 + len2;
con = (char *)malloc(sizeof(char) * (len  + 1));
if (con == NULL)
return (NULL);
for (c1 = 0; c1 < len1; c1++)
con[c1] = ar1[c1];
for (c2 = 0; c2 < len2; c2++, c1++)
con[c1] = ar2[c2];
con[len] = '\0';
return (con);
}
