#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints the size of linked list and the str
 * @h: list_t pointer variable
 * Return: i
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
