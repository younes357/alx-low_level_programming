#include "main.h"

/**
 * _abs - determine abs of n
 * @n: The character to check
 *
 * Return: 1 if lowercase or 0 if not.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
