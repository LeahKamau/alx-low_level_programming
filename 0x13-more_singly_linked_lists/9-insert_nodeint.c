#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position
 * @head: head of a list
 * @idx: index of the list where the new node is
 * added
 * @n: integer element
 *
 * Return: the address of the new node, or NULL if it
 * failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int nodepos;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

		for (nodepos = 0; nodepos < (idx - 1); nodepos++)
		{
			if (temp == NULL || temp->next == NULL)
				return (NULL);

			temp = temp->next;
		}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
