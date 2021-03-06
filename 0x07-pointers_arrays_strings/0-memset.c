#include "main.h"

/**
 * _memset - sets a constant in a given buffer n times
 * @s: buffer
 * @b: constant to be put in the buffer
 * @n: number of bytes to be put in the buffer
 *
 * Return: pointer to buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;

while (n--)
{
*p++ = b;
}

return (s);
}
