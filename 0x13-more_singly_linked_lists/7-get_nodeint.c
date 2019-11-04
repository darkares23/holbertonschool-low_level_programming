#include "lists.h"

/**
 * get_nodeint_at_index - prints the size of linked list and the str
 * @head: list_t pointer variable
 * @index: Index of node
 * Return: new node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (0);
}
