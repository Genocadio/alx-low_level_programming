#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the nth node of list
 * @head: pointer to the head of list
 * @index: position of node to be returned
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
		temp = temp->next;
	return (temp);
}
