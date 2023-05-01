#include "lists.h"
/**
 * delete_nodeint_at_index - function that delets a  node at index
 * @head: pointer to head of list
 * @index: index from which node is deleted
 * Return: 1 for success or else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *old;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	i = 0;
	while (i < index && temp != NULL)
	{
		old = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	old->next = temp->next;
	free(temp);
	return (1);
}



