#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to manipulate
 *
 * Return: non
 */

void puts_half(char *str)
{
int len, mid;

for (len = 0; str[len] != '\0'; len++)
;

if (len % 2 == 0)
mid = len / 2;
else
mid = (len - 1) / 2;

while (str[mid] != '\0')
{
_putchar(str[mid]);
mid++;
}
_putchar('\n');
}

