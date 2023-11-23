#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1 : first string
 * @s2 : second string
 *
 * Return: pointer to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
char *c;
int size;
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
size = strlen(s1) + strlen(s2) + 1;
c = malloc(size);
if (c == NULL)
{
return (NULL);
}
c = strcpy(c, s1);
c = strcat(c, s2);
return (c);
}
