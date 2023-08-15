#include "main.h"

/**
 * _islower-determine lowercase
 *
 * Return: Always 0.
 */

int _islower(int c)
{
if (c < 122 and c > 97)
	{
	return (1);
	}
else
	{
	return (0);
	}
}
