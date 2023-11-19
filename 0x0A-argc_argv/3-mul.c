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
int num1, num2, c;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

if (argc == 3)
{
c = num1 *num2;
printf("%d\n", c);
return (0);
}
return (0);
}
