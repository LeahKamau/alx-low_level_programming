#include "main.h"

/**
 * _pow_recursion - returns x raised to power y
 * @x: int parameter
 * @y: int parameter
 * Return: value of x raised to poer y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
