#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a list.
 * @head: the root of the list.
 * @index: the position of node.
 * Return: 1 for success -1 for failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
	}
	else
	{
		while (index != i)
		{
			prev = curr;
			curr = curr->next;
			i++;
		if (curr == NULL)
			return (-1);
		}
	prev->next = curr->next;
	free(curr);
	curr = NULL;
	}
	return (1);
}
