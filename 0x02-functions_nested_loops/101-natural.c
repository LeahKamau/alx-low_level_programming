#include <stdio.h>

/**
 * main - prints natural numbers below 1024
 * that are multiples of 3 or 5
 *
 * Return: always 0
 */
int main(void)
{
	int a, sumb = 0;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			sumb += a;
	}
	printf("%d\n", sumb);
	return (0);
}
