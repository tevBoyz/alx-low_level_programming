#include "main.h"

/**
 *print_times_table - prints times table
 *@n: expansion variable
 *
 *Return: 0 always
 */

void print_times_table(int n)
{
int x, m, res;
if (n < 15 && n > 0)
{
for (x = 0; x <= n; x++)
{
for (m = 0; m <= n; m++)
{
res = (x * m);

if (m != 0)
{
_putchar(',');
_putchar(' ');
}
if (res >= 10)
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else if (res < 10 && m != 0)
{
_putchar(' ');
_putchar((res % 10) + '0');
}
else
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
}
