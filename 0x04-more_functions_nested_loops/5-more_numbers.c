#include "main.h"

/**
 * more_numbers - prints 0 - 14 10 times
 *
 * Return: nothing
 */

void more_numbers(void)
{
int i, j = 0;

while (j < 10)
{
for (i = 0; i < 15; i++)
{

if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');

}
_putchar('\n');
j++;
}
}
