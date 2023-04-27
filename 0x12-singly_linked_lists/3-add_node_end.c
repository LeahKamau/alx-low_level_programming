#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node to end of list
 * @head: pointer to address of list
 * @str: element to be added
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (head == NULL || str == NULL)
		return (NULL);

	tmp = *head;
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (tmp == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;

	return (new);
}
