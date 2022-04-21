#include "main.h"

/**
 * string_toupper - converts any string to uppercase
 * @str: string to be converted
 *
 * Return: converted string pointer
 */

char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr <= 'z' && *ptr >= 'a')
*ptr = *ptr - 32;
ptr++;
}

return (str);
}

