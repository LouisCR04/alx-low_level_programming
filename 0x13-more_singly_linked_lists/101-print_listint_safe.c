#include "lists.h"
#include <stdio.h>

/**
 *print_listint_safe - Prints a linked list
 *@head: Head to a linked list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t node = 0;

	if (head == NULL)
		exit(98);

	tortoise = head;
	hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void*)tortoise, tortoise->n);
		node++;

		hare = hare->next->next;
		tortoise = tortoise->next;

		if (tortoise == hare)
		{
			printf("[%p] %d\n", (void*)tortoise, tortoise->n);
					return (node);
		}
	}
	return (node);
}
