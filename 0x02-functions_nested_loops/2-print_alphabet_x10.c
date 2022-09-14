#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0 success
 */
void print_alphabet_x10(void)
{
	int h, i;

	for (h = 1; h <= 10; h++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
