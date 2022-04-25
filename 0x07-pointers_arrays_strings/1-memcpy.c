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
char **p = &dest;
unsigned int i = 0;

while (i < n && *src != '\0')
{
*dest = *src;

dest++;
src++;

i++;
}

return (*p);
}
