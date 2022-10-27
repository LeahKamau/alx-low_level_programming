#include "lists.h"

/**
 * listint_len - returns the number of elements in list
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t countn = 0;

	while (h != NULL)
	{
		h = h->next;
		countn++;
	}
	return (countn);
}
