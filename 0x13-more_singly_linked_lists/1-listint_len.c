#include "lists.h"

/**
 *listint_len - Gets no. of elements/nodes in a linked list
 *@h: A linked list
 *
 * Return: No. of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
