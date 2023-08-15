#include "main.h"

/**
 * print_sign - determine the sign of c
 * @n: The character to check
 *
 * Return: 1 if lowercase or 0 if not.
 */

int print_sign(int n)
{
if (n > 0)
	{
	return (1);
	_putchar('+');
	}
else if (n < 0)
	{
	return (-1);
	_putchar('-');
	}
else if (n == 0)
	{
	return (0);
	_putchar('0');
	}
}
