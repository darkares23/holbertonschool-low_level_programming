#include "lists.h"

/**
 * insert_nodeint_at_index - prints the size of linked list and the str
 * @head: list_t pointer variable
 * @idx: index of the node
 * @n: constant to copy in the new node
 * Return: new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *tmp = *head;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->n = n;
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}

	while (tmp != NULL)
	{
		if (i + 1 == idx)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
			{
				free(new_node);
				return (NULL);
			}
			new_node->n = n;
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}
	return (0);
}
