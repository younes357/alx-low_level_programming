#include "main.h"

/**
 * print_rev - Print a string in reverse order.
 * @s: The input string.
 */
void print_rev(char *s)
{
int j, i = 0;


while (*s != '\0')
{
s++;
i++;
}


s--;


for (j = 0; j < i; j++)
{
_putchar(*(s - j));
}

_putchar('\n');
}

