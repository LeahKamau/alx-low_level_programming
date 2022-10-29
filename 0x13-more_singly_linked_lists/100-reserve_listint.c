#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of a list.
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode;
	listint_t *currnode;

	prevnode = NULL;
	currnode = NULL;

	while (*head != NULL)
	{
		currnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = currnode;
	}

	*head = prevnode;
	return (*head);
}
