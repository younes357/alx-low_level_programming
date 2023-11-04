#include "main.h"
/**
 * _puts - input function.
 * @str: input
 *
 */
void _puts(char *str)
{
	while (1)
	{
		if (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		else
		{
			break;
		}
}
_putchar('\n');
}
