#include "main.h"

/**
 * append_text_to_file - appends text to the end of file
 * @filename: name of file
 * @text_content: content to be appended
 *
 * Return: 1 on success -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, res, i = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

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

