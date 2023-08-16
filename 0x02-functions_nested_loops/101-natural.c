#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, p = 0;

	for (i = 0; i < 1024; i++)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	p = p + i;
	}
	}
	printf("%d\n", p);
	return (0);
}
