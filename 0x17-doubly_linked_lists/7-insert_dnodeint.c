#include "lists.h"

/**
 * insert_dnodeint_at_index - func for look for a node index in a linked list
 * @h: linked list for free
 * @idx: Node index strat from 0
 * @n: value
 * Return: node at n index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp, *temp2;
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	temp = *h;

	if (*h == NULL || idx == 0)
	{
		if (idx > 0)
		{
			free(newNode);
			return (NULL);
		}
		return (add_dnodeint(h, n));
	}
	while (i <= idx)
	{
		temp = temp->next;
		i++;
		if (i == idx)
			break;
	}
	if (temp == NULL)
		return (add_dnodeint_end(h, n));
	temp2 = temp;
	if (i  == idx)
	{
		temp2 = temp->prev;
		temp2->next = newNode;
		newNode->next = temp;
		return (newNode);
	}
	return (NULL);
}
