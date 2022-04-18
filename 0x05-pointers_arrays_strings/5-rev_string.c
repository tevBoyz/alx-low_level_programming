#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 *
 * Return: none
 */

void rev_string(char *s)
{
char c;
int i, x, mid1, mid2, length = 0;

for (i = 0; s[i]; i++)
length++;

if (length >= 1)
{
if (length % 2 != 0)
{
mid1 = length / 2;
}
else
{
mid2 = length / 2;
mid1 = mid2 - 1;

c = s[mid1];
*(s + mid1) = *(s + mid2);
*(s + mid2) = c;
}

x = length;

for (length = 0; length < mid1; length++)
{
c = s[length];
*(s + length) = *(s + (x - length - 1));
*(s + (x - length - 1)) = c;
}
}
}
