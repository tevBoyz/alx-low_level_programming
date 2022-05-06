#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min range
 * @max: max range
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
int *res, i;

if (min > max)
return (NULL);

res = malloc(sizeof(int) * (max - min + 1));

if (res == 0)
return (NULL);

for (i = 0; min <= max; min++, i++)
res[i] = min;

return (res);
}

