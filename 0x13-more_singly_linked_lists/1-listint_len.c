#include "lists.h"

/**
 * listint_len - function that returns number
 * of elements
 * @h: pointer to first node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
