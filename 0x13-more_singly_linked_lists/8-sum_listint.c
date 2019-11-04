#include "lists.h"

/**
 * sum_listint - prints the size of linked list and the str
 * @head: list_t pointer variable
 * Return: new node
*/

int sum_listint(listint_t *head)
{
	int acum = 0;
	if (!head)
		return (0);
	while (head)
	{
		acum += head->n;
		head = head->next;
	}
	return (acum);
}
