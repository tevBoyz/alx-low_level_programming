#include "main.h"

/**
 * _puts_recursion - prints a string using recursion method
 * @s: string to be printed
 *
 * Return: none
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}

