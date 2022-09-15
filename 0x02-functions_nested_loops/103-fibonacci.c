#include <stdio.h>

/**
 * main - prints sum of even
 * fibonacci
 *
 * Return: always 0
 */
int main(void)
{
	long int n1, n2, fn, sfn;

	n1 = 1;
	n2 = 2;
	fn = sfn = 0;
	while (fn <= 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
		{
			sfn += n1;
		}
	}
	printf("%ld\n", sfn);
	return (0);
}
