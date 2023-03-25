#include "main.h"
/**
* main - prints the largest of 3 integers
* Return: 0
*/
int main(void)
{
/**
* largest_number - returns the largest of 2 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/
int largest_number(int a, int b, int c)
{
	int largest;
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	return (largest);
}
	int a, b, c;
	int largest;
	a = 0;
	b = -98;
	c = -1000;
	largest = largest_number(a, b, c);
	printf("%d is the largest number\n", largest);
	return (0);	
}
