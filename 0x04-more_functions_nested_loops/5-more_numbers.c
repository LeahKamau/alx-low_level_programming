#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14
 * 10 times
 * Return: no return
 */
void more_numbers(void)
{
	int i, times;

	for (times = 1; times <= 10; times++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
