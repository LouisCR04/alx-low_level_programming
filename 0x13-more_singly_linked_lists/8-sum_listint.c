#include "lists.h"

/**
 *sum_listint - Adds all the data element n in the linked list passed
 *@head: head to the linked list
 *
 * Return: Sum of data n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
