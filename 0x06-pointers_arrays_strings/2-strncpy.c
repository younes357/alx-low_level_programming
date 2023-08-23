#include "main.h"

/**
 * _strncpy - input function.
 * @dest: input
 * @src: string to be copied.
 * @n: number of characters to be copied
 *
 *Return: concatenated string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int j = 0;

for (j = 0; j < n && src[j] != '\0' ; j++)
{
dest[j] = src[j];
}
for ( ; j < n; j++)
        dest[j] = '\0';
return (dest);
}
