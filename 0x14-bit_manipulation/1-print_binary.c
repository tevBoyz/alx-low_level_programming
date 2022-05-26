#include "main.h"

/**
 * print_binary - prints binary from an integer
 * @n: integer
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int curr;

for (i = 63; i >= 0; i--)
{
curr = n >> i;

if (curr & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}

