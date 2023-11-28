#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"


char *str_concat(char *s1, char *s2)
{
char *s;
int size, i, size1;

size = strlen(s1) + strlen(s2) + 1;
s = malloc(size * sizeof(s));
size1 = strlen(s1);
for (i = 0; i < size; i++)
{
	if (i < size1)
	{
		s[i] = s1[i];
	}
	else if (i >= size1)
	{
		s[i] = s2[i - size1];
	}
}
return (s);
}
