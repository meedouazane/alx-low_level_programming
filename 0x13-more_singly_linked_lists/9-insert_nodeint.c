#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at givien position.
 * @head: the root of the list.
 * @idx: where the new node should be added. Index starts at 0.
 * @n: value that we'll add.
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *curr;
	unsigned int i = 1;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	curr = *head;
	while (i != idx)
	{
		curr = curr->next;
		i++;
		if (curr == NULL)
			return (NULL);
	}
	new_node->next = curr->next;
	curr->next = new_node;
	return (new_node);
}
