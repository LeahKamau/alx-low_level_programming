#include "lists.h"

/**
 * print_list - prints list
 *
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
