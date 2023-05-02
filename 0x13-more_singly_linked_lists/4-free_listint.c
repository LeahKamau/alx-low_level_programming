#include "lists.h"

/**
 * free_listint - frees listint_t linked list
 * @head: pointer to listint_t linked list
 *
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
