#include "main.h"

/**
 * _memcpy - copy the first n bytes of a src to a destination buffer
 * @dest: destination buffer
 * @src: source buffer
 * @n: number if byte to copy
 *
 * Return: pointer to destination buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;

while (n-- && *src != '\0')
{
*p++ = *src++;
}

return (dest);
}
