#include "main.h"

/**
 * _islower - checks for lowercase
 * chracter
 *
 * @c: ASCII code
 *
 * Return: 1 for lowercase character otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
