#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments in cl
 * @argv: array holding arguments in cl
 * Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
