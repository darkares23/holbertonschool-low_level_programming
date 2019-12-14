#include "lists.h"

/**
 * sum_dlistint - func adds the node values
 * @head: linked list for add
 * Return: node at n index
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
