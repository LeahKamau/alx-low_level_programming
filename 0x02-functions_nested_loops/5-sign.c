#include "main.h"

/**
 * print_sign - determines if the input no.
 * is +, -, or zero
 *
 * @n: the input number type int
 *
 * Return: 1 is greater than 0. 0 is 0.
 * -1 is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
