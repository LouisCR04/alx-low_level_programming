#include "lists.h"

/**
 *free_list - Frees all malloc'd memory blocks in structs
 *@head: headd of the linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *holder;

	while (head != NULL)
	{
		holder = head;
		head = head->next;
		free(holder->str);
		free(holder);
	}

	free (head);
}
