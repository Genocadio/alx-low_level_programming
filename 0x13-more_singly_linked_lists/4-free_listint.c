#include "lists.h"
/**
 * free_listint - function that frees linked list
 * @head: pointer to the head pof list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *next;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
