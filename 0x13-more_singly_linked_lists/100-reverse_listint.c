#include "lists.h"
/**
* reverse_listint - function to reverse linked list
* @head: pointer ro the head of reveersed list
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *temp, *next;

	prev = NULL;
	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;
	}

	*head = prev;
	return (*head);
}
