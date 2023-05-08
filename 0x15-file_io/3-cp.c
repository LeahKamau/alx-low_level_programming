#include "main.h"
#include <stdlib.h>

/**
 * main - copies file content to another file
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	FILE *fd1 = fopen(argv[1], "r"), *fd2 = fopen(argv[2], "a");
	char buffer[1024];
	int n;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (fd1 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		n = fclose(fd2);
		exit(98);
	}
	if (fd2 == NULL)
	{
		fclose(fd1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (fgets(buffer, sizeof(buffer), fd1))
	{
		dprintf(fileno(fd2), "%s", buffer);
	}
	n = fclose(fd1);
	if (n == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(fd1));
		exit(100);
	}
	n = fclose(fd2);
	if (n == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(fd2));
		exit(100);
	}
	return (0);
}
