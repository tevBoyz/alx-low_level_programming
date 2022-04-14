#include <stdio.h>

/**
 *main - gets the largest prime factor
 *
 *Return: 0
 */

int main(void)
{
unsigned long num, i, bigPrime;

num = 612852475143;

for (i = 3; i <= num; i++)
{
while (num % i == 0)
{
bigPrime = num;
num /= i;
}
}
printf("%lu\n", bigPrime);
return (0);
}
