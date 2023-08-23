#include "main.h"

/**
 * _strncat - input function.
 * @dest: input
 * @src: string to be concatenated.
 * @n: number of characters to be concatenated
 *
 *Return: concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
int i =  0, j = 0;
char *s = dest;

while (*s != '\0')
{
	s++;
	i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
