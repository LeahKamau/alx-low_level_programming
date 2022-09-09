#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - asign a random number to the variable n
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld;

	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	elseif(ld == 0)
	{
		printf("Last digit of %d is %d is 0\n", n, ld);
	}
	elseif(ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, ld)

	}
	return (0);
