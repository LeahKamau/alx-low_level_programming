#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: Filename
 * @text_content: content to write in file
 *
 * Return: 1 success. fails -1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fd;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = fopen(filename, "w");

	if (fd == NULL)
		return (-1);

	chmod(filename, 0600);

	while (text_content[i] != '\0')
	{
		putc(text_content[i], fd);
		i++;
	}

	fclose(fd);
	return (1);
}
