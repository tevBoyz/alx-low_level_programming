#include "main.h"

/**
 * cap_string - capitalized letters on a string with separator
 * {, ; . ! ? '' ( ) { } space tab and new line
 * @src: string to be capitalized
 *
 * Return: capitalized string pointer
 */

char *cap_string(char *src)
{
int x, y;
int trigger;
char nots[] = ",;.!?(){}\n\t\" ";

for (x = 0, trigger = 0; src[x] != '\0'; x++)
{
if (src[0] > 96 && src[0] < 123)
{
src[0] -= 32;
}

for (y = 0; trigger == 0 && nots[y] != '\0'; y++)
{
if (nots[y] == src[x])
trigger = 1;
}

if (trigger)
{
if (src[x + 1] > 96 && src[x + 1] < 123)
{
src[x + 1] -= 32;
trigger = 0;
}
else if (src[x + 1] > 64 && src[x + 1] < 91)
trigger = 0;
else if (src[x + 1] > 47 && src[x + 1] < 58)
trigger = 0;
}
}
return (src);
}

