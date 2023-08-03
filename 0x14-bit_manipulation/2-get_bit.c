#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int input
 * @index: index of the bit
 *
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 || index > 63)
		return (-1);

	i = 1 << index;

	if ((n & i) == 0)
		return (0);

	return (1);
}
