#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index.
 * @head: the head of the list.
 * @index: the index of node that we'll delete
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	else
	{
		while (current != NULL && i < index)
		{
			current = current->next;
			i++;
		}
		if (current == NULL)
			return (-1);
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;

		free(current);
		return (1);
	}
}
