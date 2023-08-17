#include "main.h"

/**
 * print_diagonal - prints diagonale
 * @n:  lines's lengh
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i ; j++)
	{
	_putchar('_');
	_putchar('\');
	}
	_putchar('\n');
	}

}
}
