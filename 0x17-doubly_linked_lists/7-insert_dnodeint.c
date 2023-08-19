#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node
 * at idx
 * @h: points to first node
 * @idx: index
 * @n: element value
 *
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	new = NULL;
	temp = *h;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}

	if (idx == 0)
		new = add_dnodeint(h, n);

	else
	{
		while (i != idx - 1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
			return (NULL);

		if (temp->next == NULL)
			new = add_dnodeint_end(h, n);
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
		}
	}

	return (new);
}
