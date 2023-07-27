#include "lists.h"
#include <string.h>

/**
 *add_node - Inserts a new node at the beggining of a linked list
 *@head: The headd
 *@str: Pointer to a string
 *
 * Return: Pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (new);
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
