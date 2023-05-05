#include "main.h"

/**
 * get_bit - returns the value of a bit at given index
 *
 * @n: integer input
 * @index: specified index to get value at
 *
 * Return: bit value at index
 * or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n ==0 && index < 64)
		return (0);

	for (i = 0; i < 64; i++)
	{
		if (i == index)
			return (n & 1);
		n >>= 1;
	}
	return (-1);
}
