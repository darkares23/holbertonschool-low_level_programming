#include "lists.h"

/**
 * insert_nodeint_at_index - prints the size of linked list and the str
 * @head: list_t pointer variable
 * Return: new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = *head;

	while (tmp)
	{
		if (i == idx)
			{
				tmp = tmp->n;
				tmp = tmp->next;
			}
		i++;
	}
	return (0);
}
