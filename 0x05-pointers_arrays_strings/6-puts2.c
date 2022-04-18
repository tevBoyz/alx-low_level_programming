#include "main.h"

/**
 *puts2 - prints every other character starting with the first one
 *@str: string input
 *
 *Return: none
 */

void puts2(char *str)
{
int len = 0;

while (*str != '\0')
{
if (len % 2 == 0)
{
_putchar(*str);
}

len += 1;
str++;
}

_putchar('\n');
}

