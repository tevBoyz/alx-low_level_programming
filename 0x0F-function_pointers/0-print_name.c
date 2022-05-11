#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: string to print
 * @f: function pointer that take a string
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}

