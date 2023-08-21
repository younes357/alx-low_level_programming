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
	if (*str != '\0')
	{
		str++;
		i++;
	}
	else
	{
		break;
	}
}


for (j = 0; j <= i; j--)
	{
	
	_putchar(*(str - 1));
}
_putchar('\n');
}
