#include "lists.h"
/**
 * sum_listint - function to return sum of all data in a linked list
 * @head: pointer to the head of list
 * Return: sum of all data in list
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	temp = head;
	for (sum = 0; temp != NULL;)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
