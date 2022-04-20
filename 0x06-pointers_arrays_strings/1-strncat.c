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
int srclen, i;

for (srclen = 0; dest[srclen] != '\0'; srclen++)
;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[srclen + i] = src[i];

dest[srclen + i] = '\0';

return (dest);
}

