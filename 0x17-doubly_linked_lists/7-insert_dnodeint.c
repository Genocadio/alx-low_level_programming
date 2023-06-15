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
	dlistint_t *new;
	unsigned int i;
	dlistint_t *temp;

	if (*h == NULL && idx > 0)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	add_dnodeint(h, n);
	temp = *h;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	new->prev = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = new;
	}
	temp->next = new;
	return (new);
}
