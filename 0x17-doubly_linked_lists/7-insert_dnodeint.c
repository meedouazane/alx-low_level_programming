#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at givien position.
 * @h: the head of the list.
 * @idx: where the new node should be added. Index starts at 0.
 * @n: value that we'll add.
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	current = *h;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (new);
	}
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->prev = current;
	new->next = current->next;
	if (current->next != NULL)
		current->next->prev = new;
	current->next = new;
	return (new);
}
