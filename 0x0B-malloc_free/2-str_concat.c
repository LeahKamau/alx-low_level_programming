#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int len1, len2, index1, index2, size;

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2;

	strout = malloc((sizeof(char) * size) + 1);

	if (strout == NULL)
		return (NULL);

	index1 = 0;
	while (index1 < len1)
	{
		strout[index1] = s1[index1];
		index1++;
	}
	index2 = 0;
	while (index1 <= size)
	{
		strout[index1] = s2[index2];
		index1++;
		index2++;
	}
	return (strout);
}
