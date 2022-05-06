#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: space holder
 * @size: size of memory
 * Return: pointer to new memory allocation
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *res;
char *x;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

res = malloc(nmemb * size);

if (res == 0)
return (NULL);

x = res;
for (i = 0; i < (nmemb * size); i++)
x[i] = '\0';

return (res);
}

