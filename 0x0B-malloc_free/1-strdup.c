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

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;

res = (char *) malloc(sizeof(char) * i + 1);

if (res == 0)
return (NULL);
else
{
while(i--)
{
*(res + i) = *(str + i);
}
}

return (res);
}

