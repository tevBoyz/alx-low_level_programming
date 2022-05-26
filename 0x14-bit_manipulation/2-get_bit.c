#include "main.h"

/**
 * get_bit - returns a bit on a certain index of an int
 * @n: integere
 * @index: index of bit to return
 *
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bit;

bit = n >> index;

if (index > 32)
return (-1);

return (bit & 1);
}

