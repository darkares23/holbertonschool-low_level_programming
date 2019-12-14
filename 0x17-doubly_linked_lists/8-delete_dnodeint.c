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
	if (!*head)
		return (-1);
	while (temp != NULL && i < index)
		temp = temp->next;

	if (!temp)
		return (-1);
	if (i == index)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(temp);
			return (1);
		}
		if (temp->next == NULL)
		{
			temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		if (temp == *head)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(temp);
			return (1);
		}
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}