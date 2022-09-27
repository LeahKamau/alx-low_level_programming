#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

