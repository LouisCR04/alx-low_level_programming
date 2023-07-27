#include "lists.h"

/**
 *list_len - Gets no. of elements(nodes) in a linked list
 *@h: Pointer to elements of a linked list
 *
 * Return: No of nodes/elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
