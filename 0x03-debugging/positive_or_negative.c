#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - test the sign of number
 * @n: input number
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n < 0)
		{
		printf("%d is negative\n", n);
		}
	else if (n == 0)
		{
		printf("%d is zero\n", n);
		}
	else
		{
		printf("%d is positive\n", n);
		}
}
