#include "lists.h"

/**
 * reverse_listint - reverse a llinked list
 * @head: list_t pointer variable
 * Return: new node
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *s_tmp;

	tmp = *head;

	if (tmp == NULL)
		return (NULL);

	while (tmp->next != NULL)
	{
		s_tmp = tmp->next;
		tmp->next = s_tmp->next;
		s_tmp->next = *head;
		*head = s_tmp;
	}
	return (*head);
}
