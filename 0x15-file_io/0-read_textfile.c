#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 *
 * @filename: name of the file to read
 * @letters: number of characters printed
 *
 * Return: Number of characters printed
 * if fails 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	size_t i = 0;
	int ch;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, "r");

	if (fd == NULL)
		return (0);

	ch = fgetc(fd);

	while (i < letters && ch != EOF)
	{
		write(STDOUT_FILENO, &ch, 1);
		ch = fgetc(fd);
		i++;
	}
	fclose(fd);

	return (i);
}
