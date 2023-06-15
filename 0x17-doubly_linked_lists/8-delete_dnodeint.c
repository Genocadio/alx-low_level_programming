#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index of the node
 * Return: 1 on success, -1 on failure
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		curr = *head;
		*head = curr->next;
		free(curr);
		return (1);
	}

	curr = *head;
	for (unsigned int i = 1; i < index; i++)
	{
		if (curr == NULL)
		{
			return (-1);
		}
		curr = curr->next;
	}

	if (curr == NULL)
	{
		return (-1);
	}

	curr->prev->next = curr->next;
	if (curr->next != NULL)
	{
		curr->next->prev = curr->prev;
	}

	free(curr);

	return (1);
}
