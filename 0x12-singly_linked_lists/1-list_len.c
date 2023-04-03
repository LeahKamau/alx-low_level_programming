#include "lists.h"

/**
 * list_len - function that returns number of elements
 * @h: pointer to first node
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
