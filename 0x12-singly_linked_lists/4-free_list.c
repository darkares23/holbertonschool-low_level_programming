#include "lists.h"
/*
*free_list - function that frees a list_t list.
*@head: to free
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
