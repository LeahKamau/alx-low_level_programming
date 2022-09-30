#include "main.h"

/**
 * _isdigit - checks if parameter is a digit
 * @c: input number
 * Return: 1 if digit 0 to 9
 * 0 other
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
