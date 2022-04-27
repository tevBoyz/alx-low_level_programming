#include "main.h"

/**
 * _pow_recursion - calculates power funtion using recursion
 * @x: base
 * @y: exponent
 *
 * Return: product
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}

