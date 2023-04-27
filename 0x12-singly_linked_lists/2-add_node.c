#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node to beginning of list
 * @head: pointer to address of list
 * @str: element to be added
 *
 * Return: node added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
