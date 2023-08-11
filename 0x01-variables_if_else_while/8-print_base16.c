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
	char ch;

	for (c = 48 ; c < 58 ; c++)
	{
	putchar(c);
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
return (0);


}
