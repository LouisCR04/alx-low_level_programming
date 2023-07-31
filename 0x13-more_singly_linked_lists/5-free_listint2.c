#include "lists.h"

/**
 *free_listint2 - Frees mem blocks used by a linked list
 * and sets the head to point to NULL
 *@head: Head to a linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *traverser;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		traverser = *head;
		*head = (*head)->next;
		free(traverser);
	}
}
