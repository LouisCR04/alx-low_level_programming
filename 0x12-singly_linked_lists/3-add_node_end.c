#include "lists.h"
#include <string.h>

/**
 *add_node_end - Add a node at the end of the list
 *@head: headd
 *@str: Pointer to a string to be copied into new element
 *
 * Return:Address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *eol, *holder;

	if (head == NULL || str == NULL)
		return (NULL);

	eol = malloc(sizeof(list_t));
	if (eol == NULL)
		return (NULL);

	eol->str = strdup(str);
	eol->len = _strlen(str);
	eol->next = NULL;

	if (*head == NULL)
	{
		*head = eol;
		return (*head);
	}

	else
	{
		holder = *head;
		while (holder->next)
			holder = holder->next;
		holder->next = eol;
		return (eol);
	}
}

/**
 *_strlen - Calculates length of string
 *@str: Pointer to a string
 *
 * Return: Length of string
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}
