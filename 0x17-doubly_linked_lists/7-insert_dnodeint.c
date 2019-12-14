#include "lists.h"
/**
 * create_dnode - creates a new DLL node with data
 * @n: data to add to node
 *
 * Return: pointer to newly allocated/populated node
 */
dlistint_t *create_dnode(const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - inserts a node at position
 * in a doubly linked list
 * @h: double pointer to the head, so we can modify if needed
 * @idx: index to insert new node at
 * @n: data to add to new node
 *
 * Return: pointer to new element, NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count = 1;
dlistint_t *new_node, *tmp;

tmp = *h;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

if (idx == 0)
{
new_node->next = tmp;
new_node->n = n;
new_node->prev = NULL;
*h = new_node;
return (new_node);
}
while (count != idx)
{
if (tmp == NULL)
return (NULL);
tmp = tmp->next;
count++;
}
new_node->next = tmp->next;
new_node->n = n;
new_node->prev = tmp;
tmp->next = new_node;
if (new_node->next == NULL)
return (new_node);
tmp = tmp->next;
tmp = tmp->next;
tmp->prev = new_node;
return (new_node);
}
