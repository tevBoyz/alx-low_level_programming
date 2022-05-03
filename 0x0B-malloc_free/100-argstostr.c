#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */


int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * argstostr - concats args
 * @ac: arg counts
 * @av: arguments
 * Return: pointer to result string
 */

char *argstostr(int ac, char **av)
{
char *res;
int i = 0, nc = 0, j = 0, cmpt = 0;

if (ac == 0 || av == 0)
return (NULL);

for (; i < ac; i++, nc++)
nc += _strlen(av[i]);

res = malloc(sizeof(char) * nc + 1);

if (res == 0)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, cmpt++)
res[cmpt] = av[i][j];

res[cmpt] = '\n';
cmpt++;
}
res[cmpt] = '\0';

return (res);
}
