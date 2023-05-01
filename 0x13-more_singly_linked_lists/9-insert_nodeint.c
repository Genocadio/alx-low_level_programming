#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert node at n index of list
 * @idx: index to insert node
 * @head: pointer to head of list
 * @n: data to fill in new node
 * Return: address of new node or else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode, *temp;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}

