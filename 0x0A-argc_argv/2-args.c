#include <stdio.h>
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
	int i;
	(void)argc;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
