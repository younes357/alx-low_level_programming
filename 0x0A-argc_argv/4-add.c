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
int sum = 0, i = 0, j = 0;
if (argc == 1)
{
	printf("0\n");
}
for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j]; j++)
	{
		if (argv[i][j] > '9' || argv[i][j] < '0')
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
