#include "lists.h"

/**
 * free_listint2 - frees a list
 * sets head to null
 * @head: pointer to first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *curr;

	if (head != NULL)
	{
		curr = *head;

		while ((tmp = curr) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}
