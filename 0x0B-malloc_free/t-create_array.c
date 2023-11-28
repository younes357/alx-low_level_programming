#include <stdio.h>
#include <stdlib.h>
#include "main.h"



char *create_array(unsigned int size, char c)
{

	char *d;
	unsigned int i;

	d = malloc(size * sizeof(c));
	
	for (i = 0; i < size; i++)
	{
		d[i] = c;
	}
	return (d);
}
