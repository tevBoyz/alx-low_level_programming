#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to a new string
 */

char *str_concat(char *s1, char *s2)
{
int i, size1 = 0, size2 = 0;
char *res;

if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";

for (; s1[size1] != '\0'; size1++)
;

for (; s2[size2] != '\0'; size2++)
;

res = (char *) malloc(sizeof(char) * (size1 + size2) + 1);

if (res == 0)
return (NULL);

for (i = 0; i < size1 + size2; i++)
if (i < size1)
res[i] = s1[i];
else
res[i] = s2[i - size1];

return (res);
}

