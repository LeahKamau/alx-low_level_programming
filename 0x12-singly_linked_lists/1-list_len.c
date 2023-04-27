#include "lists.h"

/**
 * list_len - counts no of nodes in a list
 * @h: points to first node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
