#include <stdio.h>

/**
 * main - prints fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (i = 3; i <= 50; i++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
