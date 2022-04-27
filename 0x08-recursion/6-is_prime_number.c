#include  "main.h"

/**
 * _prime - checks if a given num is a prime num
 * @n: number to be checked
 * @i: iterator
 *
 * Return: is prime or not
 */

int _prime(int n, int i)
{
if (i > n / 2)
return (1);
else if (n % i == 0)
return (0);
else
return (_prime(n, i + 1));
}

/**
 * is_prime_number - checks if a given num is a prime num
 * @n: number to be checked
 *
 * Return: is prime or not
 */

int is_prime_number(int n)
{
int x;

if (n < 2)
return (0);

x = _prime(n, 2);

if (x == 0)
return (0);
else
return (1);
}

