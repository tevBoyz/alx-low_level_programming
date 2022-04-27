#include "main.h"

/**
 * factorial - calculates the factorial of a given nuumber
 * @n: number to be manipulated
 *
 * Return: the factorial of n
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}

