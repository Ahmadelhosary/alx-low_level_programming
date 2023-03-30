#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
int i = 97;
while (i <= 122)
{
if (i == 101 || i == 113)
{
i++;
}
putchar(i);
i++;
}
putchar(10);
return (0);
}
