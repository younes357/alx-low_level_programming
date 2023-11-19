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
int num1, num2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

if (argc == 3)
{
printf("%d\n", num1 * num2);
return (0);
}
return (0);
}
