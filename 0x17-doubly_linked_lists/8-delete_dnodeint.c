#include "lists.h"

/**
 * delete_dnodeint_at_index - func for look for a node index in a linked list
 * @head: linked list for free
 * @index: Node index to delete
 * Return: node at n index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = *head;
	if (!head)
		return (-1);
	if (!temp)
		return (-1);
	else
	{
		while (i < index && temp)
		{
			temp = temp->next;
			i++;
		}
		if (temp->next)
			temp->next->prev = temp->prev;
		if (index == 0)
			*head = temp->next;
		else
			temp->prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
