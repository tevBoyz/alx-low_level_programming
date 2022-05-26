#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary string pointer
 *
 * Return: uint base 10 of b
 */

unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int val = 0;

if (!b)
return (0);

while (b[i])
{
if (b[i] < '0' || b[i] > '1')
return (0);

val = (2 * val)+(b[i] - '0');

i++;
}

return (val);
}

