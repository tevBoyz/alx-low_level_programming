#include <stdio.h>

/**
 * main - prints 1 to 100,
 * if the num is a multiple of 3, prints Fizz,
 * if the num is a multiple if 5, prints Buzz,
 * if both, prints FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
int i;

for (i = 1; i < 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}
printf("Buzz\n");
return (0);
}
