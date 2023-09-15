#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *@head: Pointer to head of the list
 *@n: Data in the list
 *
 * Return: address of the new element if success, NULL if failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
