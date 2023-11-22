#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - creates reprint input array
 * @str : the address of memory to return
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
char *s;
int size;
if (str == NULL)
{
	return (NULL);
}
size = strlen(str) + 1;
s = malloc(size);
if (s == NULL)
{
	return (NULL);
}
strcpy(s, str);
return (s);
}
