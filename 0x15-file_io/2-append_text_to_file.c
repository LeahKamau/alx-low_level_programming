#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append content
 * @text_content: content to append in file
 *
 * Return: 1 (Success) else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	int wbytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;

		wbytes = write(fd, text_content, count);

		if (wbytes == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
