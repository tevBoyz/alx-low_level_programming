#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: exit code
 */

int main(int argc, char *argv[])
{
int i, prod = 1;

if (argc > 1)
{
for (i = 1; i < argc; i++)
prod *= atoi(argv[i]);

printf("%i\n", prod);
}
else
printf("Error\n");

return (0);
}

