#include "lists.h"

/**
 * free_listint - prints the size of linked list and the str
 * @head: list_t pointer variable
 * Return: new node
*/

void free_listint(listint_t *head)
{
listint_t *tmp;

while (head)
{
	tmp = head;
	head = tmp->next;
	free(tmp);
}
free(head);
}
