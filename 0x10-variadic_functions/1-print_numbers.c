#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: - separates the numbers
 * @n: numbers of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list p;

va_start(p, n);

for (i = 0; i < (n - 1) && n != 0; i++)
{
if (!separator)
printf("%d", va_arg(p, int));
else
printf("%d%s", va_arg(p, int), separator);
}

if (n)
printf("%d\n", va_arg(p, int));
else
printf("\n");

va_end(p);
}

