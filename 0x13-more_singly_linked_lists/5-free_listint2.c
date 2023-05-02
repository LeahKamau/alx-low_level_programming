#include "lists.h"

/**
 * free_listint2 - frees linked list & sets
 * head to NULL
 * @head: pointer to  address of listint_t
 *
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while ((tmp = *head) != NULL)
	{
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
