#include "main.h"

/**
 * _islower - print 1 if lower case, print 0 if not
 *
 *@c: The character to be checked.
 *
 * Return: Return 1 or 0.
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
