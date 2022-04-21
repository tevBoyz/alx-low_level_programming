#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printerd
 * Return: none
 */

void print_number(int n)
{
int pow, sign, hold;

sign = 0;
pow = 1;
hold = n;

if (n < 0)
{
_putchar('-');
sign = 1;
}
while (hold > 9 || hold < -9)
{
pow *= 10;
hold /= 10;
}

while (pow > 0)
{
if (pow > 9)
{
if (!sign)
_putchar((n / power % 10) + '0');
else
_putchar((n / power % 10) * -1 + '0');

pow /= 10;
}
if (pow == 1)
{
if (sign)
_putchar((n % 10) * -1 + '0');
else
_putchar(n % 10 + '0');

pow = 0;
}
}
}
