#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of cmd arguments
 * @argv: array of cmd arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mu;
	int f;
	int s;
	(void)argc;

	f = atoi(argv[1]);
	s = atoi(argv[2]);
	mu = f * s;
	printf("%d\n", mu);
	return (0);
}
