#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: pointer to file
 * @letters: number of letters to read and print
 *
 * Return: if success letters read, else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	int ch;
	size_t count = 0;

	fptr = fopen(filename, "r");

	if (fptr == NULL || filename == NULL)
		return (0);

	while (count < letters && (ch = fgetc(fptr)) != EOF)
	{
		write(STDOUT_FILENO, &ch, 1);
		count++;
	}

	fclose(fptr);

	return (count);
}
