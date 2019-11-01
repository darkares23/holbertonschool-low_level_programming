#include "lists.h"

/**
* add_node_end - adds a new node to the end of a linked list.
* @head: pointer to the start of the list.
* @str: pointer assigned to the string, added to the list.
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *end_node, *end = *head;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
		return (NULL);

	while (str[i])
		i++;
	
	end_node->len = i;
	end_node->str = strdup(str);
	end_node->next = NULL;

	if (*head == NULL)
		{
			*head = end_node;
			return (end_node);
		}
	while(end->next != NULL)
		end = end->next;
	end->next = end_node;

	return (end_node);
}
