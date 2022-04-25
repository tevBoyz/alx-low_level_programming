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
int found = 0;

while (*s != '\0')
{
if (*s == c)
{
found = 1;
break;
}

s++;
}


if (found)
return (s);

else
return ('\0');
}

