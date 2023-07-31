#include "lists.h"

/**
 *reverse_listint - Reverses the order in which elements are accessed
 *in a singly linked list
 *@head: Head to th esingly linked list
 *
 * Return: Head to the newly reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv, *nxt;

	if (head == NULL)
		return (NULL);

	prv = NULL;
	nxt = NULL;

	while (*head != NULL)
	{
		nxt = *head;
		*head = (*head)->next;
		nxt->next = prv;
		prv = nxt;
	}

	*head = prv;
	return (*head);
}
