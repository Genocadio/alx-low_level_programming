#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: integer
 * Return: the address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new->prev = NULL;
	}
	else
	{
		new->prev = *head;
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
