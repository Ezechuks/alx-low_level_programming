#include "lists.h"

/**
 * add_note - adds a new mode at the beginning of a list
 * @head: head of linked list
 * @str: string to store in the list
 *
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_mode == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
