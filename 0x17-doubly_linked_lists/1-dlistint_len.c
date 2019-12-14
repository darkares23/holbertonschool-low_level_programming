#include "lists.h"
/**
 * dlistint_len - doubly linked list
 * @h: Header of the list to print
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
