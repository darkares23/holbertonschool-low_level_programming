#include "lists.h"

/**
 * pop_listint - prints the size of linked list and the str
 * @head: list_t pointer variable
 * Return: new node
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int deleted_value;

	tmp = *head;
	*head = (*head)->next;
	deleted_value = tmp->n;
	if (!head)
	{
		free(head);
		return (deleted_value);
	}
	return (deleted_value);
}
