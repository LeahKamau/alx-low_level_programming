#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a poinetr to a new space in memory with string dup
 * @str: string
 * Return: pointer to an array of chars
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int strlen, strlen2;

	if (str == NULL)
		return (NULL);

	strlen = 0;

	while (str[strlen] != '\0')
		strlen++;

	duplicate = (char *)malloc(sizeof(char) * (strlen + 1));

	if (duplicate == NULL)
		return (NULL);

	for (strlen2 = 0; strlen2 <= strlen; strlen2++)
		duplicate[strlen2] = str[strlen2];

	return (duplicate);
}
