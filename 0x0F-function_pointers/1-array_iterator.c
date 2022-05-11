#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute a function as a parameter
 * @array: array
 * @size: length of array
 *
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (!action || !array)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}

