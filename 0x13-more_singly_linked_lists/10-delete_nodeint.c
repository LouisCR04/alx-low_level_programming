#include "lists.h"

/**
 *delete_nodeint_at_index - Deletes a node at index passed
 *@head: Head to a linked list
 *@index: Index of node to delte
 *
 * Return:1 if successful, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *holder, *traverser;

	if (head == NULL || *head == NULL)
		return (-1);

	holder = *head;

	if (index == 0)
	{
		*head = holder->next;
		free(holder);
		return (1);
	}

	traverser = *head;

	for (i = 0; i < index; i++)
	{
		traverser = traverser->next;

		if (traverser == NULL)
			return (-1);
	}

	holder = traverser->next;
	traverser->next = holder->next;
	free(holder);

	return (1);
}
