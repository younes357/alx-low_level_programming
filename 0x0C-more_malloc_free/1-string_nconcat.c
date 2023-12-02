#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>




char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int size, i;


size = strlen(s1) + n + 1;
if (s1 == NULL || s2 == NULL)
{
	return ("");
}
s = malloc(size);
if (s == NULL)
{
return (NULL);
}
strcpy(s,s1);
for (i = 0; i < n; i++)
{
s[strlen(s1)+i] = s2[i];
}





return (s);

}
