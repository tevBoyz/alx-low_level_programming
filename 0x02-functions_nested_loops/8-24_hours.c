#include "main.h"
/**
* jack_bauer - prints time table in this format: HH:MM
* Return: the sum of two numbers.
*/

void jack_bauer(void)
{
int hh, mm;

for (hh = 0; hh < 24; hh++)
{
for (mm = 0; mm < 60; mm++)
{
_putchar((hh / 10) + '0');
_putchar((hh % 10) + '0');
_putchar(':');
_putchar((mm / 10) + '0');
_putchar((mm % 10) + '0');
_putchar('\n');
}
}
}

