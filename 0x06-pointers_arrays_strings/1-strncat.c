#include "main.h"

/**
 * _strncat - adds n chars to destination from source
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concated
 *
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
int srclen, i;

for (srclen = 0; dest[srclen] != '\0'; srclen++)
;

for (i = 0; n > 0 && src[i] != '\0'; i++, n--, srclen++)
dest[srclen] = src[i];

return (dest);
}
