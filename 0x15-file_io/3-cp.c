#include "main.h"
#include <stdlib.h>

/**
 * main - copies file content to another
 * @ac: argument count
 * @argv: argument vector
 *
 * Return: 1 (success)
 */
int main(int ac, char *argv[])
{
	int fptr_frm, fptr_to;
	ssize_t rbytes, wbytes;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fptr_frm = open(argv[1], O_RDONLY);

	if (fptr_frm == -1)
	{
		close(fptr_frm);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fptr_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (fptr_to == -1)
	{
		close(fptr_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((rbytes = read(fptr_frm, buffer, sizeof(buffer))) > 0)
		wbytes = write(fptr_to, buffer, rbytes);
	if (rbytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (wbytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}


	if (close(fptr_frm) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fptr_frm);
		exit(100);
	}

	if (close(fptr_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fptr_to);
		exit(100);
	}

	return (0);
}
