#include "lists.h"
/**
*free_list - entry point
*@head: list_t
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		free(head->str);
		free(head);
		head = tmp->next;
	}

	free(head);
}
