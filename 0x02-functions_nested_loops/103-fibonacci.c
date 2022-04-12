#include <stdio.h>

/**
 * main - print sum of even valued fibonacci
 * sequence terms not exceeding 4000000
 *
 * Return: always 0
 */

int main(void)
{
unsigned long t1 = 0, t2 = 1, sum = 0;
float t_sum = 0;

while (1)
{
sum = t1 + t2;
if (sum > 4000000)
break;

if ((sum % 2) == 0)
t_sum += sum;

t1 = t2;
t2 = sum;
}
printf("%.0f\n", t_sum);

return (0);
}
