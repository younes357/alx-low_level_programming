#include "main.h"

/**
 * times_table- prints the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
		int i, j, k = 0;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		k = i * j;
		if (k < 10)
		{
		_putchar (k + '0');
		_putchar (',');
		_putchar (' ');
		}
		else if (k >= 10)
		{
		_putchar ((k / 10) + '0');
		_putchar ((k % 10) + '0');
		_putchar (',');
		_putchar (' ');
		}
		_putchar ('\n');
	}

}
}



