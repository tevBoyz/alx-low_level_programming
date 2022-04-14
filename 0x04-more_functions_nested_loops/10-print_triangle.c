#include "main.h"

/**
 * print_triangle - prints a trianle with size given
 * @size: size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
int i, j, k;

if (size <= 0)
{
size = 0;
_putchar('\n');
}

for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
_putchar(' ');
for (k = 0; k <= i; k++)
_putchar('#');

_putchar('\n');
}
}
