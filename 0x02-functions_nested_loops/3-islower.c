#include "main.h"

/**
 * _islower - returns 1 if char is lowercase and 0 if not
 * @c: the character to be checked
 *
 * Return: 0 if not lowercase and 1 if lowercase
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
