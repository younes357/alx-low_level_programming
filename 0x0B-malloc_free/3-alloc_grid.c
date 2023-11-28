#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_array - creates buffer
 * @width : grid's width
 * @height: grid's height
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */



 
int **alloc_grid(int width, int height)
{
int **d;
int p, i, j, k;
  
p = width * height;
if (p <= 0)
{
return (NULL);
}
d = (int**) malloc (width * sizeof(int*));
for (i = 0; i < width; i++)
{
d[i] = (int*) malloc(height * sizeof(int));
}
if (d == NULL)
{
return (NULL);
}
k = 0;
j = 0;
while (k < height)
{
while(j < width)
{
d[j][k] = 0;
k++;
j++;
}
}
return (d);
}

