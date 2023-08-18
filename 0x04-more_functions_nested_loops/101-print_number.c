#include "main.h"

/**
 * print_number - entry point
 * @n: input
 */
void print_number(int n)
{
	unsigned int var;

	if (n < 0)
	{
		var = -n;
		_putchar('-');
	} else
	{
		var = n;
	}

	if (var / 10)
	{
		print_number(var / 10);
	}

	_putchar((var % 10) + '0');
}
