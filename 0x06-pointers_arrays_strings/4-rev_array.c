#include "main.h"

/**
 * reverse_array - reverses a given array
 * @a: the array to be reversed
 * @n: the size of the array
 *
 * Return: none
 */

void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}

