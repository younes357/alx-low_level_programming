#include <stdlib.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
	{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
		if (i < j || i != j)
		{
		putchar(i);
		putchar(j);
		}
		if (i == 56 && j == 57)
		{
		putchar('\n');
		}
		else
		{
		putchar(',');
		putchar(' ');
		}
		}

	}
return (0);

}
