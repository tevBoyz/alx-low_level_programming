#include "main.h"

/**
 * create_file - creates a file and fill with content
 * @filename: name if file to be created
 * @text_content: content of file to be filled in
 *
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd, res, i = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

if (fd < 0)
return (-1);

if (text_content != NULL)
{
for (; text_content[i]; i++)
;

res = write(fd, text_content, i);

if (res != i)
return (-1);
}

close(fd);
return (1);
}

