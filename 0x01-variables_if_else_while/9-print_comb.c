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
	int c;

	for (c = 48 ; c <= 57 ; c++)
	{
	putchar(c);
	if (c == 57)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
return (0);

}
