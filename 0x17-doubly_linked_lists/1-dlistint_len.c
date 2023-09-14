#include "lists.h"
/**
 * dlistint_len - number of elements in a linked dlistint_t list.
 * @h: head of the linked list
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t size = 0;

	current = h;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}

