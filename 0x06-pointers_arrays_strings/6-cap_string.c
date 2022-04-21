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
int i, j, trig;

char sep[] = ",;.!?(){}\nt\" ";

for (i = 0, trig = 0; str[i] != '\0'; i++)
{
if (str[0] > 96 && str[0] < 123)
trig = 1;

for (j = 0; sep[j] != '\0'; j++)
{
if (sep[j] == str[i])
trig = 1;
}

if (trig)
{
if (str[i] > 96 && str[i] < 123)
{
str[i] -= 32;
trig = 0;
}
else if (str[i] > 64 && str[i] < 91)
trig = 0;
else if (str[i] > 47 && str[i] < 58)
trig = 0;
}
}
return (str);
}
