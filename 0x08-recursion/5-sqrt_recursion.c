#include "main.h"

/**
 * _sqrt - sqrt
 * @i: searcher for sqrt
 * @n: number to calculate the sqrt
 *
 * Return: the square root
 */

int _sqrt(int n, int i)
{
if (n - i * i <= 0)
return (i);
else
return (1 * _sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the square root of a number using recursion
 * @n: number to calculate the sqrt
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (0);
else
{
int x = _sqrt(n, 1);

if (x * x != n)
return (-1);
else
return (x);
}
}

