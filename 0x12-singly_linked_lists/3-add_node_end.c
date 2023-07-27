#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list.
 * @head: head of the list.
 * @str: string that we'll be added.
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *curr_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->str = strdup(str);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	curr_node = *head;
	while (curr_node->next != NULL)
		curr_node = curr_node->next;
	curr_node->next = new_node;
	return (new_node);
}
