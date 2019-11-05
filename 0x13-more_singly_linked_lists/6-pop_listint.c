#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: list_t pointer variable
 * Return: deleted value
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp, *ptr_to_del;
	int deleted_value;

	if (*head == NULL)
		return (0);
		
	deleted_value = (*head)->n;
	ptr_to_del = *head;
	tmp = *head;
	tmp = (*head)->next;
	*head = tmp;
	
	if (!ptr_to_del)
	{
		free(ptr_to_del);
	}

	return (deleted_value);
}
