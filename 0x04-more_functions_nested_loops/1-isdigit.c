#include "main.h"

/**
 * _isdigit - checks if a given char is a digit or not
 * @c: the char to be checked
 *
 * Return: 1 if char is a digit, 0 therwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}

