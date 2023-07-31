#include "lists.h"

/**
 *pop_listint - Deletes head node & returns it n data
 *@head: Head to a linked list
 *
 * Return: data n the element/node contained
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *head_new;

	if (*head == NULL)
		return (n);

	head_new = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = head_new;

	return (n);
}
