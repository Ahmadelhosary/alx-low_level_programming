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
int len1, len2;
int x, y;
char *con;
        
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0, len2 = 0;
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
        
con = (char *)malloc(sizeof(char) * ((len1 + len2)  + 1));
if (con == NULL)
return (NULL);        
for (x = 0; x < len1; x++)
con[x] = s1[x];
for (y = 0; y < len2; y++, x++)
con[x] = s2[y];
con[(len1 + len2)] = '\0';
return(con);
}
