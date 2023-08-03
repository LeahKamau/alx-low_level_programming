#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total;
	int len, base;

	if (!b)
		return (0);

	total = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			total += base;
	}

	return (total);
}
