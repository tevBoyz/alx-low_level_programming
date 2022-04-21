#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 * Return: encoded string
 */

char *rot13(char *str)
{
char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rotated = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

char *ptr = str;
int i;

while (*ptr != '\0')
{
for (i = 0; original[i] != '\0'; i++)
if (*ptr == original[i])
{
*ptr = rotated[i];
break;
}

ptr++;
}

return (str);
}

