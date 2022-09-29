#include "main.h"

/**
 * _strlen_recursion - returns length os dtring
 * @s: string parameter
 * Return: returns length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
