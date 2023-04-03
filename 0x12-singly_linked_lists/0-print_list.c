#include "lists.h"

/**
 * print_list - function that prints all the elements
 * of a list
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

		while (h != NULL)
		{
			if (h->str == NULL)
				printf("[%d] %s\n", 0, "(nil)");

			printf("[%u] %s\n", h->len, h->str);
			num++;

			h = h->next;
		}

	return (num);
}
