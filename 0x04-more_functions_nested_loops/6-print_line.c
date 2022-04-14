#include "main.h"

/**
 * print_line - prints a liine with length n
 * @n: length of the line
 *
 * Return: nothing
 */

void print_line(int n)
{
int i;

if (n < 0)
n = 0;

for (i = 0; i < n; i++)
{
_putchar('_');
}

_putchar('\n');
}
