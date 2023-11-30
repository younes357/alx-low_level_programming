#include <stdio.h>
#include <stdlib.h>
#include "main.h"


void *malloc_checked(unsigned int b)
{

void *o;

o = (void*) malloc(b);

if(o == NULL)
{
return("98");
}
return(o);
}
