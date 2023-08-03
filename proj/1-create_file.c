#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: filename of file to create
 * @text_content: content to write in file
 *
 * Return: 1 (Success) else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wbytes;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	wbytes = write(fd, text_content, strlen(text_content));

	if (wbytes == -1)
		return (-1);

	close(fd);

	return (1);
}
