#include <stdio.h>

/**
 * main-  entry point
 * return:   Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		if (i % 3 == 0 && i % 5 != 0)		
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}

}
return (0);
}
