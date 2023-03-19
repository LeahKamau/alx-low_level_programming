#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates s1 & 1st nbytes of s2
 * @s1: string
 * @s2: string
 * @n: no of s2 bytes to be concatenated with s1
 * Return: pointer to new allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int strlen1, strlen2, index, index1;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	strlen1 = 0;

	while (s1[strlen1] != '\0')
		strlen1++;

	strlen2 = 0;

	while (s2[strlen2] != '\0')
		strlen2++;

	if (n >= strlen2)
		n = strlen2;

	s3 = malloc(sizeof(char) * (strlen1 + n + 1));

	for (index = 0; index < strlen1; index++)
		s3[index] = s1[index];

	for (index1 = 0; index1 < n; index1++)
	{
		s3[index] = s2[index1];
		index++;
	}

	return (s3);

}
