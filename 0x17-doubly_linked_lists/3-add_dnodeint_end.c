#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the endof a dlistint_t list
 * @head: pointer to the head of the list
 * @n: integer
 * Return: the address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	if (last != NULL)
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	new->prev = last;
	return (new);
}
