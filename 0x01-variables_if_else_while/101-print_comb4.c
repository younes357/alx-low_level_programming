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
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
		for (k = 50; k <= 57; k++)
		{
		if (i < j && j < k)
		{
		putchar(i);
		putchar(j);
		putchar(k);
		if (i == 55 && j == 56 && k == 57)
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
	}
	}
return (0);

}
