#include "main.h"

/**
 * swap_int - input point.
 * @a: 1st input
 * @b: 2nd input
 *
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
