#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a given string in to a new allocated string
 * @str: string to duplicate
 *
 * Return: pointer to new allocated string
 */

char *_strdup(char *str)
{
int i;
char *res;

for (i = 0; str[i] != '\0'; i++)
;

if (str == NULL)
return (NULL);

res = (char *) malloc(sizeof(char) * i + 1);

if (res == 0)
return (NULL);

while (i--)
{
*(res + i) = *(str + i);
}

return (res);
}

