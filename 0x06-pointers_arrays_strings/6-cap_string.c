#include "main.h"

/**
 * cap_string - capitalized letters on a string with separator
 * {, ; . ! ? '' ( ) { } space tab and new line
 * @str: string to be capitalized
 *
 * Return: capitalized string pointer
 */

char *cap_string(char *str)
{
int x, y;
int trigger;
char nots[] = ",;.!?(){}\nt\" ";

for (x = 0, trigger = 0; src[x] != '\0'; x++)
{
if (src[0] > 96 && src[0] < 123)
trigger = 1;

for (y = 0; nots[y] != '\0'; y++)
{
if (nots[y] == src[x])
trigger = 1;
}

if (trigger)
{
if (src[x] > 96 && src[x] < 123)
{
src[x] -= 32;
trigger = 0;
}
else if (src[x] > 64 && src[x] < 91)
trigger = 0;
else if (src[x] > 47 && src[x] < 58)
trigger = 0;
}
}
return (src);
}

