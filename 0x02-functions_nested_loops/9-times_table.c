#include "main.h"

/**
 * times_table - Prints table 9.
 *
 * Return: void.
 */

void times_table(void)
{
int h;
int m;

for (h = 0; h < 10; h++)
{
for (m = 0; m < 10; m++)
{
int x = h * m;
if (x < 10)
{
printf("%d", x);
}
else if (x > 9)
{
printf("%d", x);
}

if (m < 9) /* check if we are at the end of the row */
{
if (x < 10)
printf(",  ");
if (x > 9)
printf(", ");
}
}
putchar('\n');
}
}
