#include "main.h"

/**
 * _strncpy - copy n chars of a string to dest from src
 * @dest: destination string
 * @src: source string
 * @n: number of chars to copy
 *
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{

int i;

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}

for (; n > i; i++)
dest[i] = '\0';

return (dest);
}

