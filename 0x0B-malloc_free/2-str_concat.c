#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatates s1 and s2 to create new string
 * @s1: string
 * @s2: string
 * Return: pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int strlen1, strlen2, strlen3, index1, index2;

	if (s1 == NULL)
		s1[] = "";

	if (s2 == NULL)
		s2[] = "";

	strlen1 = 0;

	while (s1[strlen1] != '\0')
		strlen1++;

	strlen2 = 0;

	while (s2[strlen2] != '\0')
		strlen2++;

	strlen3 = strlen1 + strlen2;

	s3 = (char *)malloc(sizeof(char) * (strlen3 + 1));

	if (s3 == NULL)
		return (NULL);

	for (index1 = 0; index1 < strlen1; index1++)
		s3[index1] = s1[index1];

	index2 = 0;

	while (index1 <= strlen3)
	{
		s3[index1] = s2[index2];
		index2++;
		index1++;
	}

	return (s3);
}
