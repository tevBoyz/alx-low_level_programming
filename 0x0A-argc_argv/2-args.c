#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: exit code
 */

int main(int argc, char *argv[])
{
while (argc--)
{
printf("%s\n", *argv++);
}

return (0);
}

