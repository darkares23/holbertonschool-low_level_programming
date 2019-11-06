#include "lists.h"

/**
 * print_listint_safe - reverse a llinked list
 * @head: list_t pointer variable
 * Return: new node
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	if (head == NULL)
		exit(98);

	while (head != NULL && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	if (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		count++;
	}
	return (count);
}
