#include "main.h"

/**
 * _puts_recursion - input function
 * @s: pointer to the string
 *
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
_putchar(*s);
_puts_recursion(s + 1);
}
