#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index of the node
 * Return: 1 on success else -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	if (temp->next == NULL)
	{
		free(temp);
		return (1);
	}
	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
