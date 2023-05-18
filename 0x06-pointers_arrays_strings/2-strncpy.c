#include "main.h"

/**
 *_strncpy - function that copies a string
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */



char *_strncpy(char *dest, char *src, int n)
{

char *st = dest;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }
return (st);

}
