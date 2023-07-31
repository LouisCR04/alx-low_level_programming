#include "lists.h"

/**
 *add_nodeint_end - Inserts a node at end of a linked list
 *@head: Head of a linked list
 *@n: An integer value
 *
 * Return: Pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *eol, *traverser;

	eol = malloc(sizeof(listint_t));
	if (eol == NULL)
		return (NULL);

	eol->n = n;
	eol->next = NULL;

	if (*head == NULL)
	{
		*head = eol;
		return (*head);
	}

	traverser = *head;

	while (traverser->next != NULL)
		traverser = traverser->next;
	traverser->next = eol;

	return (eol);
}
