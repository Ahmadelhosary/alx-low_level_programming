#include <stdio.h>
/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0.
 */

int main(void)
{
int i = 48;
int space = 32;
int comma = 44;

while (i <= 57)
{
putchar(i);
if (i < 57)
putchar(comma);
putchar(space);

i++;
}
return (0);
}
