#include "main.h"

/**
 * _strncat - adds n chars to destination from source
 * @dest: destination string
 * @src: source string
 *
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
char *d;
int srclen;

for (srclen = 0; dest[srclen] != '\0'; srclen++)
;

*d = dest + srclen;

for (srclen = 0; src[srclen] != '\0'; srclen++)
;

if (srclen < n)
n = srclen;

while (n--)
{
*d = *src;
d++;
src++;
}

*d = '\0';

return (dest);
}

