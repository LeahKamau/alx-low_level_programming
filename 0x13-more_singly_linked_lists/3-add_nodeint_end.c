#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a list
 * @head: pointer to first node
 * @n: n element
 * Return: address of element of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	tmp = *head;
	new->n = n;
	new->next = NULL;

	if (tmp == NULL)
		*head = new;

	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (*head);
}
