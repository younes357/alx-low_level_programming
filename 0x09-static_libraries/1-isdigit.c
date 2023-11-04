#include "main.h"

/**
 * _isdigit - determine if the integer c is uppercase
 * @c: The character to check
 *
 * Return: 1 if lowercase or 0 if not.
 */

int _isdigit(int c)
{
if (c <= 57 && c >= 48)
	{
	return (1);
	}
else
	{
	return (0);
	}
}
