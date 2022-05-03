#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array dynamically and initialize it
 * @size: size of array
 * @c: character to initialize the array with
 *
 * Return: pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *res = (char *) malloc(sizeof(char) * size);

if (size <= 0 || *res == '\0')
return ('\0');

for (i = 0; i < size; i++)
{
*(res + i) = c;
}

return (res);
}

