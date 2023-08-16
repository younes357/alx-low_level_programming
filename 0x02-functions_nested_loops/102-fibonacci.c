#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints fibonnaci numbers
 *
 *return always 0
 */

int main(void)
{
unsigned int p[49];
int i;

p[0] = 1;
p[1] = 2;
for (i = 0; i < 49; i++)
{
p[i + 2] = p[i] + p[i + 1];
printf("%u, ", p[i]);
}
return (0);
}
