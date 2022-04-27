#include "main.h"

/**
 * size - find length if a string using recursion
 * @s: string to measure
 *
 * Return: string length
 */

int size(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + size(s + 1));
}

/**
 * isPali - checks pali
 * @s: string
 * @i: start point
 *
 * Return: is pali or not
 */

int isPali(char *s, int i)
{
if (i > size(s) / 2)
return (1);

return (s[i] == s[size(s) - i - 1] && isPali(s, i + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 *
 * Return: result
 */

int is_palindrome(char *s)
{
if (size(s) == 0)
return (1);

return (isPali(s, 0));
}

