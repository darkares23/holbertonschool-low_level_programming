#include "lists.h"

/**
 * free_listint2 - prints the size of linked list and the str
 * @head: list_t pointer variable
 * Return: new node
*/

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
	head = NULL;
}
