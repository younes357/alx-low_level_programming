#include "main.h"

/**
 * reverse_array - input function
 * @a: input array
 * @n: size of array to be reversed
 */
void reverse_array(int *a, int n)
{
	int k, j, t;

	j = n - 1;

	for (k = 0; k < n / 2; k++)
	{
		t = a[k];
		a[k] = a[j];
		a[j--] = t;
	}
}
