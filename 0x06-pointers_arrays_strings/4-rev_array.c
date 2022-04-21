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
int i, mid1, mid2, temp;

if (n % 2 == 0)
{
mid2 = n / 2;
mid1 = mid2 - 1;
temp = a[mid1];
a[mid1] = a[mid2];
a[mid2] = temp;
}
else
mid1 = n / 2;

for (i = 0; i < mid1; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}

