#include "lists.h"

/**
 * listint_len - returns no of elements in linked list
 * @h: first node
 *
 * Return: no of elements in listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
