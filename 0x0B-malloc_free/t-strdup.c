#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>



char *_strdup(char *str)
{
	char *s;
	int size, i;

	size = strlen(str) + 1;
	s = malloc(size);
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	return (s);
}

