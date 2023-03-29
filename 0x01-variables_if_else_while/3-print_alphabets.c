#include <stdio.h>
/**
 * main - Prints alphabet using putchar lowercase then in upper case
 *
 * Return: Always 0.
 */

int main(void)
{
int i = 97;
char ne = '\n';

while (i <= 122)
{
putchar(i);
i++;
}

int x = 65;

while (x <= 90)
{
putchar(x);
x++;
}
putchar(ne);
return (0);
}

