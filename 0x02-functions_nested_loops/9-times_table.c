#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			prod = i * j;
			_putchar(',');
			_putchar(' ');
			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
