#include "main.h"

/**
 * print_alphabetx10- prints the alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	for (j = 0; j <= 10; j++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
	}
}
