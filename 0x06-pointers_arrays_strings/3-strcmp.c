#include "main.h"

/**
 * _strcmp - input function.
 * @s1: input
 * @s2: second string to be compared.
 *
 *
 *Return: integer depending the comparison
 */

int _strcmp(char *s1, char *s2)
{

do {
	if (*s2 == '\0')
	{
		return (0);
	}
	s1++;
	s2++;
} while (*s1 == *s2);

return (*s1 - *s2);
}
