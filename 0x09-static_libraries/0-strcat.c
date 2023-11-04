#include "main.h"

/**
 * _strcat - input function.
 * @dest: input
 * @src: string to be concatenated.
 *
 *Return: concatenated string.
 */

char *_strcat(char *dest, char *src)
{
int i =  0, j = 0;
char *s = dest;

while (*s != '\0')
{
	s++;
	i++;
}
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}
dest[i + j] = '\0';
return (dest);

}
