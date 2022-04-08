include <stdlib.h>
include <time.h>
/* more headers goes here */

/**
*main - entry point
*
*if else - to find out positive or negative or zero
*rand - generates random number
*Return: 0 always
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if(n>0)
{
printf("%s\n is positive", n);
}
else if(a<0)
{
printf("%s\n is negative", n);
}
else
{
printf("%s\n, is zero");
}
return (0);
}
