#include <stdio.h>

/**
 *main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, b;

for (i = 0; i < 100; i++)
{
for (b = 0; b < 100; b++)
{
if (i < b)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((b / 10) + 48);
putchar((b % 10) + 48);
if (i != 98 || b != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
