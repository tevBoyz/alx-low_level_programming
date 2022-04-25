#include "main.h"

/**
 * _strchr - searches for a character in a string and returns a pointer to
 * the first occurence
 *
 * @s: string to search in
 * @c: the char to search for
 *
 * Return: pointer to the first occurence in the string
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i); i++)
{
if (*(s + 1) == c)
return (s + i);
}

if (*(s + 1) == c)
return (s + 1);

return (0);
}

