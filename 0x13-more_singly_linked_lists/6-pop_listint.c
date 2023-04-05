#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to first node
 * Return: element in first node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int elem;

	if (head == NULL)
		return (0);
	temp = *head;
	elem = temp->n;
	*head = (*head)->next;

	free(temp);

	return (elem);
}
