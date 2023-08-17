#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_numbers - Entry point
 *
 */


void print_numbers(void)
	{
	int c;

	for (c = 48 ; c < 58 ; c++)
	{
	if (c == 50 && c == 52)
	{
	continue;
	}
	_putchar(c);
	}
	_putchar('\n');

}
