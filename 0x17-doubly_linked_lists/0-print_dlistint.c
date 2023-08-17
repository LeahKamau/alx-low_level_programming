#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly
 * linked list
 * @h: points to first node
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
