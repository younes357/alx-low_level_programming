#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates buffer
 * @c : the address of memory to return
 * @size: the size of the memory to print
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *v;
unsigned int s;
if (size == 0)
{
return (NULL);
}
v = malloc(size * sizeof(char));
if (v == NULL)
{
return (NULL);
}
for (s = 0; s < size; s++)
{
v[s] = c;
}
return (v);
}
