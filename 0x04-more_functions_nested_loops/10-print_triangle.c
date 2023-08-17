#include "main.h"

/**
 * print_triangle - prints triangle
 * @size:  triangle's size
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
			if (i >= j)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
			}
		_putchar('\n');
		}
}
}
