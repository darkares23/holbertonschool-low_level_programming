#include "lists.h"

/**
 * pop_listint - delete the head node of a linkenid
 * @head: list_t pointer variable
 * Return: new node
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int deleted_value;

	if (*head == NULL)
		return (0);
	tmp = *head;
	deleted_value = tmp->n;
	*head = (*head)->next;

	if (tmp != NULL)
	{
		free(tmp);
		return (deleted_value);
	}
	return (deleted_value);
}
