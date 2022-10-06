#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of cahrs
 * @size: size of array
 * @c: stored char
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	int index;
	char *cr;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(char) * size);

	if (cr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		cr[index] = c;

	return (array);
}


