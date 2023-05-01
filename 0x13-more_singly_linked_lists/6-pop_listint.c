#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: pointer to the head node of the list
 * Return: head node's data or else 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
