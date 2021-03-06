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
int result, sign, i;
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
if (result * 10 >= INT_MAX - 9 && sign == 1)
return (INT_MAX);
else if (result * 10 >= INT_MAX - 9 && sign == -1)
return (INT_MIN);

result = result * 10 + s[i] - '0';
i++;
}

return (sign *result);
}

