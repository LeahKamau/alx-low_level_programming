#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: success always 0
 */
int main(void)
{
	charr alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
