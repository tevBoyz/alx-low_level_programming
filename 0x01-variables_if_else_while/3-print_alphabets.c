#include <stdlib.h>
#include <stdio.h>

/**
 * *main - entry point
 * *Return: 0  always
 */

int main(void)
{
int n;
int m;
m = 65;
n = 97;
while (n < 123)
{
putchar(n);
n += 1;
}
while (m < 91)
{
putchar(m);
m += 1;
}
putchar('\n');
return (0);
}
