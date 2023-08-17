#include "lists.h"

/**
 * dlistint_len - counts the number of elements
 * @h: points to first node
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		if (h->n)
			count++;
		h = h->next;
	}

	return (count);
}
