#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int p = 1, i = 0;

	int c;

	if (b == NULL)
		return (0);

	for (c = (strlen(b) - 1); c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);

		if (b[c] == '1')
			i += p;
		p *= 2;
	}
	return (i);
}
