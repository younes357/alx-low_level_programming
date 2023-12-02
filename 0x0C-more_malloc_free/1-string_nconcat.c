#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

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
unsigned int size, i;


size = strlen(s1) + n + 1;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";


s = malloc(size);
if (s == NULL)
{
return (NULL);
}
strcpy(s, s1);
for (i = 0; i =< n; i++)
{
s[strlen(s1) + i] = s2[i];
}

s[strlen(s1) + i] = '\0';



return (s);

}
