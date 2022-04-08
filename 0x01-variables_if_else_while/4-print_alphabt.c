#include <stdlib.h>
#include <stdio.h>

/**
*main - entry point
*Return: 0  always
*/

int main(void)
{
int n;

n = 97;
while (n < 123)
{
if (n != 101 && n != 113)
{
putchar(n);
}
n += 1;
}
putchar('\n');
return (0);
}
