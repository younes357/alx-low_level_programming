#include "main.h"

/**
 * _puts_recursion - input function
 * @s: pointer to the string
 *
 *
 */

void _puts_recursion(char *s)
{
int len = 0, i = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		_putchar(s[i]);
	}
_putchar('\0');
}
