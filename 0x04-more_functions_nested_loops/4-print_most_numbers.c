#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_most_numbers - Entry point
 *
 */


void print_most_numbers(void)
{
	for (c = 48 ; c < 58 ; c++)
	{
		if (c == 50 || c == 52)
		{
			continue;
		}
		else 
		{
			_putchar(c);
		}
	}
	
	_putchar('\n');

}
