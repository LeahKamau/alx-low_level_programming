#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @s2: second string
 * @n: amount of bytes
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal to 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, i, lsout;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)
		n = len2;

	lsout = len1 + n;

	ptr = malloc(lsout + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];

	ptr[i] = '\0';
	
	return (ptr);
}
