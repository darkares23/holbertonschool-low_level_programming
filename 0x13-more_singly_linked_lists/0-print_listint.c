#include "lists.h"

/**
 * print_list - prints the size of linked list and the str
 * @h: list_t pointer variable
 * Return: i
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
