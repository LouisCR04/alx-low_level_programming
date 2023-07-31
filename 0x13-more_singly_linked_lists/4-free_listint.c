#include "lists.h"

/**
 *free_listint - Frees mem blocks containing a linked list
 *@head: Head to a linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *traverser;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		traverser = head;
		head = head->next;
		free(traverser);
	}

	free(head);
}
