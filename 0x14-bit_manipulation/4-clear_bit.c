#include "main.h"

/**
 * clear_bit - sets a  bit at index to 0
 * @n: integer
 * @index: index
 *
 * Return: 1 if successful, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (8 * sizeof(n)))
return (-1);

*n &= ~(1 << index);
return (1);
}

