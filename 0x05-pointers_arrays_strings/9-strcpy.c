#include "main.h"

/**
 * *_strcpy - copy string from src to destination
 * @dest: destination string
 * @src: source string
 *
 * Return: the copied stringpointer
 */

char *_strcpy(char *dest, char *src)
{
char *start = dest;

while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*(dest + 1) = '\0';

return (start);
}

