#include "main.h"

/**
 * flip_bits - returns num of bits to flip to get
 * from one num to another
 *
 * @n: param
 * @m: destination
 *
 * Return: num if flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i = 0, flips = 0;
unsigned long int j = sizeof(unsigned long int) * 8;

while (i < j)
{
if ((n & 1) != (m & 1))
flips++;

m = m >> 1;
n = n >> 1;
i++;
}

return (flips);
}

