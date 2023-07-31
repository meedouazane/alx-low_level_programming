#include "lists.h"
/**
 * get_nodeint_at_index -  the nth node of a list.
 * @head: the root of the list.
 * @index: the index of the node, starting at 0.
 * Return: the nth node of a list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr;

	if (head == NULL)
		return (NULL);
	curr = head;
	while (i != index)
	{
		curr = curr->next;
		i++;
	}
	return (curr);
}
