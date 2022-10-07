#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: number of elements in array
 * @size: size of elements of array
 *
 * Return: NULL if size or nmemb == 0
 * NULL if malloc fails
 * Pointer to memory allocated if successfull
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0; || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(p + i) = 0;

	return (p);
}