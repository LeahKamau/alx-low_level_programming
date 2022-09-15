#include "main.h"

/**
 * _isupper - checks if parameter is uppercase letter
 * @c: input character
 * Return: 1 if uppercase, 0 other
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
