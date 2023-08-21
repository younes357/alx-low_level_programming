#include "main.h"
/**
 * print_rev - input function.
 * @str: input
 *
 */
void print_rev(char *s)
{
int j, i = 0;

while (1)
{
	if (*s != '\0')
	{
		s++;
		i++;
	}
	else
	{
		break;
	}
}


for (j = 0; j <= i; j--)
	{
	
	_putchar(*(s - 1));
}
_putchar('\n');
}
