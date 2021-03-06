#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks if a char is an int
 * @s: char to check
 * Return: 0 or 1
 */

int isInteger(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * main - main function
 * @argc: - arg count
 * @argv: - arg vector
 * Return: none
 */

int main(int argc, char *argv[])
{
int i = 0, coinUsed = 0, coin = 0;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
if (isInteger(argv[1]))
{
i = atoi(argv[1]);
while (i > 0 && coin <= 4)
{
if (i >= coins[coin])
{
i -= coins[coin];
coinUsed++;
}
else
{
coin++;
}
}
}

printf("%i\n", coinUsed);

return (0);
}
