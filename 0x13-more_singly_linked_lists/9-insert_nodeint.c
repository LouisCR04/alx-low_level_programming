#include "lists.h"

/**
 *insert_nodeint_at_index - Inserts a new node at a given index
 *of a linked list
 *@head: Head to a linked list
 *@idx: Index where a new node is to be inserted
 *@n: An integer value
 *
 * Return: Address of the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ins_node, *traverser;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	ins_node = malloc(sizeof(listint_t));
	if (ins_node == NULL)
		return (NULL);

	ins_node->n = n;

	if (n == 0)
	{
		ins_node->next = *head;
		*head = ins_node;
		return (ins_node);
	}

	traverser = *head;

	for (i = 0; i < idx - 1; i++)
	{
		traverser = traverser->next;

		if (traverser == NULL)
			return (NULL);
	}

	ins_node->next = traverser->next;
	traverser->next = ins_node;

	return (ins_node);
}
