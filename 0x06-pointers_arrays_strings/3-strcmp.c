#include "main.h"

/**
 * _strcmp - compare 2 string lexicographically
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{

while (*s1 != '\0' || *s2 != '\0')
{
if (*s1 > *s2)
{
return (1);
}
if (*s1 < *s2)
{
return (-1);
}
if (*s1 == *s2)
{
return (0);
}
}
*s1++;
*s2++;
return (0);

}
