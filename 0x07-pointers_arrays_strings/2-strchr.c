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
while (*s != c && *s != '\0')
{
s++;
}

if (*s == c)
return (s);
else
return (0);
}

