#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
