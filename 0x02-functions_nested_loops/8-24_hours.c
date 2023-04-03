#include "main.h"

/**
 * jack_bauer - Prints hours of the day with minutes
 *
 * Return: void.
 *
 */

void jack_bauer(void)
{
int h;
int m;

for (h = 0; h < 24; h++)

	for (m = 0; m < 60; m++)
	{
	if (h < 10)
	printf("0");
	printf("%d:", h);
	if (m < 10)
	printf("0");
	printf("%d\n", m);

	}
}
