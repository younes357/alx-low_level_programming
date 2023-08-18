#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int maxPrime = -1;
	long int i;

	n = 612852475143;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n >>= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
	}
	/*
	* This condition is to handle the case
	* when n is a prime number greater than 4
	*/
	if (n > 2)
		maxPrime = n;

	printf("%ld\n", maxPrime);

	return (0);
}
