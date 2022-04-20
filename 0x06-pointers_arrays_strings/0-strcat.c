#include "main.h"

/**
 * _strcat - concats two strings gives
 * @src: string to be added
 * @dest: string to be added on
 *
 * Return: concated string
 */

char *_strcat(char *dest, char *src)
{
char *dest_start = dest;

for (; *dest != '\0'; dest++)
;

for (; *src != '\0'; src++)
{
*dest = *src;
dest++;
}

return (dest_start);
}

