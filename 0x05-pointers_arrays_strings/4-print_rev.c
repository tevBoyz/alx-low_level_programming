#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s: string to be printed in reverse
 *
 * Return: none
 */

void print_rev(char *s)
{

int len, x;

for (len = 0; s[len] != '\0'; len++)
;

x = len - 1;

while (x >= 0)
{
_putchar(s[x]);
x--;
}

_putchar('\n');
}

