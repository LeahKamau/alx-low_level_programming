#include <stdio.h>

/**
 * main - prints numbers 0 t0 9 with commas and spaces
 *
 * Return: 0 is success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}