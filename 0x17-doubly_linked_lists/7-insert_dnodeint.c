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
	dlistint_t *newNode, *temp;
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (!h)
		*h = newNode;
	else
	{
		temp = *h;
		while (idx != i++ && temp->next)
			temp = temp->next;
		if (temp->next)
			newNode->prev = temp->prev;
		else
			newNode->prev = temp;
		if (idx == i)
		{
			temp->next = newNode;
			newNode->prev = temp;
			newNode->next = NULL;
		}
		else if (idx == i - 1)
		{
			if (temp->prev)
				temp->prev->next = newNode;
			else
				*h = newNode;
			temp->prev = newNode;
			newNode->next = temp;
		}
		else
		{
			free(newNode);
			return (NULL);
		}
	}
	return (newNode);
}
