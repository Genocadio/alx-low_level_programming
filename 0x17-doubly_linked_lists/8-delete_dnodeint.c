#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index of the node
 * Return: 1 on success, -1 on failure
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	temp = *head;
	for (i = 1; i < index; i++)
	{
		if (temp == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	temp->prev->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
