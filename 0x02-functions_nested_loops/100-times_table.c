#include "main.h"

/**
 * print_times_table - prints n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, prod;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				prod = a * b;
				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
					_putchar(',');
				}
				else if (prod <= 99)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar(((prod / 100) % 10) + '0');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
