#include <stdio.h>

/**
 * main - prints numbers from 1 to 100.
 * for multiple of 3s print fizz, for multiple of 5s
 * print buzz and for both 3 and 5 multiples fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
}
else
printf("%d ", i);
}
printf("\n");
return (0);
}
