#include "main.h"

/**
 * print_diagonal - prints a diagonal line with length n
 * @n: length of diagonal
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
int i, j = 0;

if (n <= 0)
{
_putchar('\n');
n = 0;
}

while (j < n)
{
for (i = 0; i < j; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
j++;
}
}
