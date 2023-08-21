#include "main.h"

/**
 * rev_string - Print a string in reverse order.
 * @s: The input string.
 */
void rev_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
i--;
for (; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

