include "main.h"
/**
 * main - entry point
 *
 * Description: prints _putchar followed by a new line
 *
 * Return: 0 successful
 */
int main(void)
{
	char lnk[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(lnk[i]);
	}
	_putchar('\n');
	return (0);
}
