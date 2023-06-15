#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index to insert the node
 * @n: integer  to be filled in new node
 * Return: the address of the new element
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	if (current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new->next = current->next;
	new->prev = current;
	if (current->next != NULL)
		current->next->prev = new;
	current->next = new;
	return (new);
}
