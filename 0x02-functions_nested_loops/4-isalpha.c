#include "main.h"

/**
 * _isalpha - print 1 if lower or upper case, print 0 if not
 *
 *@c: The character to be checked.
 *
 * Return: Return 1 or 0.
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}

