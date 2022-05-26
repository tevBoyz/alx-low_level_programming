#include "main.h"

/**
 * set_bit - set a bit at index to 1
 * @n: integer
 * @index: index
 *
 * Return: 1 if ok, -1 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (8 * sizeof(n)))
return (-1);

*n |= (1 << index);
return (1);
}

