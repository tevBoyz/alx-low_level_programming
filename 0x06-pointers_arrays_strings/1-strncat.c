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
char *dest_start = dest;
int srclen;

for (srclen = 0; src[srclen] != '\0'; srclen++)
;

if (srclen < n)
n = srclen;

for (; *dest != '\0'; dest++)
;

while (n--)
{
*dest = *src;
dest++;
src++;
}

return (dest_start);
}

