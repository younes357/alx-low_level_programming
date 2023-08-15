#include "main.h"

/**
 * jack_bauer- prints time
 *
 * Return: no return void function.
 */
void jack_bauer(void)
{
	int i = 0, j = 0;

	for (j = 00; j < 24; j++)
	{
	for (i = 00; i < 60; i++)
	{
		_putchar ((j / 10) + '0');
		_putchar (j % 10 + '0');
		_putchar (':');
		_putchar ((i / 10) + '0');
		_putchar ((i % 10) + '0');
		_putchar ('\n');
	}
	}
}
