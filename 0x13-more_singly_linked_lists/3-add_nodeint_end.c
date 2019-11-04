#include "lists.h"

/**
 * add_nodeint_end - prints the size of linked list and the str
 * @head: list_t pointer variable
 * @n: const int
 * Return: new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node;
	listint_t *end = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new_node;

	return (new_node);
}
