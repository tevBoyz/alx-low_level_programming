#include "main.h"

/**
 * _isalpha - checks if the character is alphabetic
 * @c: character to be checked
 *
 * Return: 0 if not alphabetic and 1 if alphabetic
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
