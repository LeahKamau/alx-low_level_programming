#include "lists.h"

/**
 * add_node_end - function that adds a node at the end
 * @head: pointer to first node
 * @str: string
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t n = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str != NULL)
	{
		while (str[n])
		{
			n++;
		}

		new->str = strdup(str);
		new->len = n;
		new->next = NULL;
		tmp = *head;

		if (tmp == NULL)
			*head = new;

		else
		{
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = new;
		}
	}

	return (*head);
}



