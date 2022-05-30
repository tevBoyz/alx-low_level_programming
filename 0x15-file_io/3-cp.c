#include "main.h"
/**
 * main - copy file content to another file
 * @argc: number if arguments
 * @argv: array if arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int fd_read, fd_write, i, j, k;
char *buff[BUFSIZ];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_read = open(argv[1], O_RDONLY);
if (fd_read < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((i = read(fd_read, buff, BUFSIZ)) > 0)
{
if (fd_write < 0 || write(fd_write, buff, i) != i)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_read);
exit(99);
}
}
if (i < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

j = close(fd_read);
k = close(fd_write);
if (j < 0 || k < 0)
{
if (j < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
if (k < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
exit(100);
}
return (0);
}

