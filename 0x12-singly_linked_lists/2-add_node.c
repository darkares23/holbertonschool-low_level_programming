#include "lists.h"

/**
* add_node - adds a new node to the beginning of a linked list.
* @head: pointer to the start of the list.
* @str: pointer assigned to the string, added to the list.
* Return: node address, or NULL if fails.
*/

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->next = *head;
	*head = node;
	while (str[i])
		i++;
	node->len = i;

	return (node);
}
