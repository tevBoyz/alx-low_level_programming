#include <stdio.h>

/**
 * main - main block to display the first 50 fibonacci sequence
 * Return: 0  nothing
 */

int main(void)
{
int i, n;
unsigned long t1, t2, nextTerm;

n = 50;
t1 = 0;
t2 = 1;

nextTerm = t1 + t2;

for (i = 1; i <= n; i++)
printf("%ld, ", nextTerm);
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
return (0);
}
