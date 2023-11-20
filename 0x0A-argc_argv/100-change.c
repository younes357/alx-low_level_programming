#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - main function
 * @argc: arguments count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{

int c[] = {25, 10, 5, 2, 1};
int p = atoi(argv[1]), i = 0, n = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}

if (p < 0)
{
	printf("0\n");
	return (0);
}

for (i = 0; i < 5 ; i++)
{
	while (p >= c[i])
	{
		p = p - c[i];
		n++;
	}
}
printf("%d\n", n);
return (0);
}
