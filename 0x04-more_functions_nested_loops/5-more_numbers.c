#include "main.h"

/* betty style doc for function main goes there */
/**
 * more_numbers - Entry point
 *
 */


void more_numbers(void)
	{
	int c, i;

	for (i = 0 ; i < 10 ; i++)
	{
	for (c = 0 ; c < 15 ; c++)
	{
	if (c < 10)
	{
	_putchar(c + '0');
	}
	else
	{
	_putchar ('1');
	_putchar (j % 10 + '0');
	}
	}
	_putchar('\n');
	}
}
