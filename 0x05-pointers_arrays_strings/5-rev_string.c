#include "main.h"

/**
 * rev_string - Print a string in reverse order.
 * @s: The input string.
 */
void rev_string(char *s)
{
int j, i = 0;

while (*s != '\0')
{
s++;
i++;
}
i--;
for (j = i ; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}

