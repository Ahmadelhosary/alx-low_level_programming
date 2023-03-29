#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase except e,q.
 *
 * Return: Always 0.
 */

int main(void)
{
int i = 97;
int error;
while (i <= 122 && error == 0)
{
putchar(i);
if (i == 101 || i == 113)
{
error = 1;
}
i++;
error = 0;
}
putchar(10);
return (0);
}
