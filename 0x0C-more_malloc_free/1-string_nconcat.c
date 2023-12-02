#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings.
* @s1: First string.
* @s2: Second string.
* @n: number of bytes of s2 concatenated to s1 .
*
* Return: pointer to s1 + n*s2.
*/



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int size, i, len = 0;

for (i = 0; s1[i]; i++)
	len++;

size = len + n + 1;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";


s = malloc(size);
if (s == NULL)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
s[i] = s1[i];
}

for (i = 0; i < n && s2[i] != '\0'; i++)
{
s[len + i + 1] = s2[i];
}

s[len + i] = '\0';



return (s);

}
