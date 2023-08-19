#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: points to first node
 * @index: index
 *
 * Return: 1 on sucess otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = *head;

	if (temp == NULL)
		return (-1);

	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;
	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
	}
	else
	{
		while (temp != NULL && i != index)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
			return (-1);
		if (temp->next == NULL)
		{
			temp->prev->next = NULL;
			free(temp);
		}
		else
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
		}
	}
	return (1);
}
