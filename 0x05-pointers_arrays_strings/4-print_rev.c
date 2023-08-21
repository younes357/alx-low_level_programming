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
		s++;
		i++;
	}
	else
	{
		break;
	}
}


for (j = i; j > 0; j--)
	{
	
	_putchar(*(str + j));

}
_putchar('\n');
}
