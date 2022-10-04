#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers passed as arguments
 * @argc: number of arguments passed in cl
 * @argv: array holding arguments passed in cl
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi (argv[1]) * atoi (argv[2]));
	return (0);
}
