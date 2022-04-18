#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array passed separated by comma
 * @a: array to be printed
 * @n: size of the array
 *
 * Return: none
 */

void print_array(int *a, int n)
{
int x;
if (n <= 0)
printf("\n");

for (x = 0; x < n; x++)
{
if (x < n - 1)
printf("%d, ", a[x]);
else
printf("%d\n", a[x]);
}
}

