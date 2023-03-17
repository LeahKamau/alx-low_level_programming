#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b * sizeof(char));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
