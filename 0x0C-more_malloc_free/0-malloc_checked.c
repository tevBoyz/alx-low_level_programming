#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory with malloc
 * @b: size to be allocated
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *s;

s = malloc(b);

if (s == 0)
exit(98);

return (s);
}

