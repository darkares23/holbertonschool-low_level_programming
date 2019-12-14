#include "lists.h"

/**
 * get_dnodeint_at_index - func for look for a node index in a linked list
 * @head: linked list for free
 * @index: Node index strat from 0
 * Return: node at n index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
