#include "lists.h"
/**
 * free_listint2 - function that frees list
 * and set head to NULL
 * @head: pointer to head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	temp = *head;
	*head = NULL;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
