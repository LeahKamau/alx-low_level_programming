#include "lists.h"

/**
 * print_listint - function that prints all elements
 * of a list & returns number of elements
 * @h: address of first node
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
