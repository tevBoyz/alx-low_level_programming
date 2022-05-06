#include "main.h"
#include <stdlib.h>

/**
 * _realloc - immitates realloc function from stdlib
 * @ptr: old pointer
 * @old_size: size of old pointer
 * @new_size: size of new pointer
 * Return: pointer to array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *res;
unsigned int i;
char *cpy, *x;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
res = malloc(new_size);
if (res == 0)
return (NULL);

return (res);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

cpy = ptr;
res = malloc(new_size);

if (res == 0)
return (NULL);

x = res;
for (i = 0; i < old_size; i++)
x[i] = *cpy++;

free(ptr);
return (res);
}

