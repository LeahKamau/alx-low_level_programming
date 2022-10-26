#include <stdio.h>

/**
 * bfMain - function executed before main
 * Return: no return
 */

void __attribute__ ((constructor)) bfMain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
