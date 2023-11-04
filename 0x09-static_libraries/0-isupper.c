#include "main.h"

/**
 * _isupper - determine if the integer c is uppercase
 * @c: The character to check
 *
 * Return: 1 if lowercase or 0 if not.
 */

int _isupper(int c)
{
if (c < 91 && c > 64)
	{
	return (1);
	}
else
	{
	return (0);
	}
}
