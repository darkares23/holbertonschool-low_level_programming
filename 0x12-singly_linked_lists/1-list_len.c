#include "lists.h"

/**
 * list_len - prints the size of linked list
 * @h: list_t pointer variable
 * Return: i
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
