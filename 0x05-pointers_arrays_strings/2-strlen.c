#include "main.h"

/**
 * _strlen - input function.
 * @s: input
 *
 *Return: the lenght.
 */
int _strlen(char *s)
{
int i = 0;

while (1)
{
	if (*s != '\n')
	{
		*s++;
		i++;
	}
	else
	{
		break;
	}
}
return (i);
}
