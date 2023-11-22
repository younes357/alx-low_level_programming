#include <stdio.h>
#include <stdlib.h>
 
char *create_array(unsigned int size, char c)
{
char *v;
unsigned int s;
v = malloc (size * sizeof (char));
for (s = 0; s < size; s++)
{
v[s] = c;
}
return (v);
}
