#include "main.h"

/**
 * _strcmp - compares any two given strings
 * @s1: string one
 * @s2: string two
 *
 * Return: returns 0 if s1 and s2 are the same,
 * less than zero if s1 < s2, and greater than 0 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
int result = 0, i;

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] == s2[i])
continue;

else
{
result = s1[i] - s2[i];
break;
}
}

return (result);
}

