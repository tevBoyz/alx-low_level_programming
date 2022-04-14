#include "main.h"

/**
 *_isupper - checkes if a given character is uppercase or not
 *@c: the character to be checked
 *
 * Return: 1 if c is upperase, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}

