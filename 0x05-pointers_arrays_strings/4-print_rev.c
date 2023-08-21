#include "main.h"
/**
 * _puts - input function.
 * @str: input
 *
 */
void _puts(char *str)
{
int j;

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
