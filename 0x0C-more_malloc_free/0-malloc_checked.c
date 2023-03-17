#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: pointer to allocated memory
 * if malloc fails, status value is equal to 98
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b * sizeof(char));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
