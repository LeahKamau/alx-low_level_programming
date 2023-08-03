#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another one
 * @n: integer input
 * @m: integer input
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			count++;
	}

	return (count);
}
