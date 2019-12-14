#include "lists.h"

/**
 * free_dlistint - func for free a linked list
 * @head: linked list for free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
