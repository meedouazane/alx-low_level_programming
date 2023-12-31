#include "lists.h"
/**
 * get_dnodeint_at_index - the nth node of a dlistint_t linked list.
 * @head: the root of the list.
 * @index: the index of the node, starting at 0.
 * Return: the nth node of a list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;
	while (i != index)
	{
		current = current->next;
		i++;
	if (current == NULL)
		return (NULL);
	}
	return (current);
}
