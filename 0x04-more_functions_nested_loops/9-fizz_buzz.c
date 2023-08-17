#include "main.h"

/**
 * print_line - prints line
 * @n:  lines's lengh
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf('Fizz');
		}
		else if (i % 5 == 0)
		{
			printf('Buzz');
		}
		else
		{
			printf('%d', i);
		}

}
}
