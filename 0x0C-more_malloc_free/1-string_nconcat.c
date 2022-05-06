#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings using given number of bytes
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concat from s2 to s1
 *
 * Return: pointer to a new pointer holding sum of strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *res;
unsigned int i, reqmem, len1, len2;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (len1 = 0; s1[len1] != '\0'; len1++)
;
for (len2 = 0; s2[len2] != '\0'; len2++)
;

if (n >= len2)
reqmem = len1 + len2;
else
reqmem = len1 + n;

res = malloc(sizeof(char) * (reqmem + 1));

if (res == 0)
exit(98);

for (i = 0; i < (reqmem + 1); i++)
{
if (i < len1)
res[i] = s1[i];

else if (i < (len1 + n))
res[i] = s2[i - len1];

else
res[i] = '\0';
}
return (res);
}

