#include "main.h"

/**
 * _puts - prints a given string
 * @str: string to be printed
 *
 * Return: none
 */

void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

