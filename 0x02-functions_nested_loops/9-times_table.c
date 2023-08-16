#include "main.h"

/**
 * times_table- prints the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, p = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{i
		p = i * j;
		if (p < 10 && j != 9)
		{
		_putchar (p + '0');
		_putchar (',');
		_putchar (' ');
		_putchar (' ');
		}
		else if (p >= 10 && j != 9)
		{
		_putchar ((p / 10) + '0');
		_putchar ((p % 10) + '0');
		_putchar (',');
		_putchar (' ');
		_putchar (' ');
		}
		else if (p < 10 && j == 9)
		{
		_putchar (p + '0');
		_putchar ('\n');
		}
		else if (p >= 10 && j == 9)
		{
		_putchar ((p / 10) + '0');
		_putchar ((p % 10) + '0');
		_putchar ('\n');
		}

	}
}
}
