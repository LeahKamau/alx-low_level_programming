#include <stdio.h>

/**
 * b4main - executes before main function
 * Return: nothing
 */
void __attribute__((constructor)) b4main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
