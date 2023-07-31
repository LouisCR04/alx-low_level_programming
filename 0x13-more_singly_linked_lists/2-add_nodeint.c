#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning of a linked list
 *@head: Head to a linked list
 *@n: Integer value
 *
 * Return: Address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
