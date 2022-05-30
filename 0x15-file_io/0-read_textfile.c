#include "main.h"

/**
 * read_textfile - reads a textfile and prints to the stdout
 * @filename: name of file to be read
 * @letters: number of letters to be read out
 *
 * Return: num of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, res1, res2;

char *buff;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);

if (fd < 0)
return (0);

buff = malloc(sizeof(char) * letters);

if (buff == 0)
return (0);

res1 = read(fd, buff, letters);

if (res1 < 0)
{
free(buff);
return (0);
}

buff[res1] = '\0';

close(fd);

res2 = write(STDOUT_FILENO, buff, res1);

if (res2 < 0)
{
free(buff);
return (0);
}

free(buff);
return (res2);
}

