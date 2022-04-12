#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from a given num to 98
 * @n: start number
 *
 * Return: no return val
 */

void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%d ,", i);
printf("%d\n", 98);
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d ,", i);
printf("%d\n", 98);
}
}
}
