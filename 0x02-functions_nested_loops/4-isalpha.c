#include "main.h"

/**
 * _isalpha - determine if the integer c is alphabetic character
 * @c: The character to check
 *
 * Return: 1 if lowercase or 0 if not.
 */

int _isalpha(int c)
{
if ((c < 122 && c > 97) || (c < 91 && c > 64))
	{
	return (1);
	}
else
	{
	return (0);
	}
}
