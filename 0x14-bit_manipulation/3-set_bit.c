#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * at given index
 * @n: pointer to an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	*n = (*n | i);

	return (1);
}
