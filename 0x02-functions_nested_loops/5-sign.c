#include "main.h"

/**
 * print_sign - prints the sign of the given integer
 * @n: the integer to be checked
 *
 * Return: 1 if positive, 0 if 0 and -1 if negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

