#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: file to append text
 * @text_content: content to append to file
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = fopen(filename, "a");

	if (fd == NULL)
		return (-1);

	while (text_content[i] != '\0')
	{
		putc(text_content[i], fd);
		i++;
	}

	fclose(fd);
	return (1);
}
