#include "lists.h"

/**
 * add_node - function that adds a node
 * at the beginning of a list
 * @head: address of node
 * @str: string
 * Return: adress of head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
		new->next = *head;
		*head = new;
	}

	return (*head);
}
