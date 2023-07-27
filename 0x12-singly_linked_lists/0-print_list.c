#include "lists.h"
#include <stdio.h>

/**
 *print_list - Prints contents fo a singly linked list and their size
 *@h: Structure whose elements we want to print
 *
 * Return: No. of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
