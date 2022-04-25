#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 * @s: initial segment
 * @accept: substring
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i;

while (*s != '\0' && ((*s > '0' && *s < '9') || (*s > 'A' && *s < 'Z') || (*s > 'a' && *s < 'z')))
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
count++;
break;
}
}
s++;
}

return (count);
}

