#include "main.h"

/**
 * print_rev - Print a string in reverse order.
 * @s: The input string.
 */
void print_rev(char *s)
{
int j, i = 0;

// Calculate the length of the string
while (*s != '\0')
{
s++;
i++;
}

// Move back to the last character in the string
s--;

// Print characters in reverse order
for (j = 0; j < i; j++)
{
_putchar(*(s - j)); // Print characters in reverse order
}

_putchar('\n');
}

