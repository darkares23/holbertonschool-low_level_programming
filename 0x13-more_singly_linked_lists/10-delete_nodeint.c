#include "lists.h"

/**
 * delete_nodeint_at_index - prints the size of linked list and the str
 * @head: list_t pointer variable
 * @index: index of the node
 * Return: new node
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new_node, *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (tmp != NULL)
	{
		if (i + 1 == index)
		{
			new_node = tmp->next;
			tmp->next = new_node->next;
			free(new_node);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
