#include "main.h"
#include <limits.h>
/**
 * _atoi - converts string value to integer value
 * @s: string to be converted
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
int temp, result, sign, i;
result = 0;
sign = 1;
i = 0;

if (*s == '\0')
return (0);

for (; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
break;

if (s[i] == '-')
sign = sign * -1;
}

while (s[i] >= '0' && s[i] <= '9')
{
temp = result;
result = result * 10 + s[i] - '0';
if (temp > result && sign == 1)
return (INT_MAX);
else if (temp > result && sign == -1)
return (INT_MIN);
i++;
}

return (sign *result);
}

