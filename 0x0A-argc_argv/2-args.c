#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: arguments count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int c;
for (c = 0; c < argc; c++)
{
printf("%s\n",  argv[c]);
}
return (0);
}
