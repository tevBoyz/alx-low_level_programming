#include "main.h"

/**
 * leet - encodes a string into 1337 or leet
 * @str: input string
 * Return: pointer to the encoded string
 */

char *leet(char *str)
{
char *ptr = str;
char *small = "aeotl", *cap = "AEOTL", *val = "43071";
int i;

while (*ptr != '\0')
{
for (i = 0; small[i] != '\0' || cap[i] != '\0'; i++)
if (*ptr == small[i] || *ptr == cap[i])
*ptr = val[i];

ptr++;
}

return (str);
}

