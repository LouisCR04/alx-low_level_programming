#include "lists.h"
#include <stdio.h>

/**
 *print_listint - Prints all the elements of a list
 *@h: A linked list  (Pointer points to its head)
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
