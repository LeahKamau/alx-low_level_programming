#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
	list_t *temp, *prev;

	if (head != NULL)
	{
		temp = head;

		while (temp->next != NULL)
		{
			if (temp->next->next == NULL)
				prev = temp;
			temp = temp->next;
		}

		prev->next = NULL;
		free(temp);
	}
}
