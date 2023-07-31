#include "lists.h"

/**
 * listint_len - prints all the elements of a list.
 * @h: head of the list0
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;
	const listint_t *curr;

	if (!h)
		return (0);
	curr = h;
	while (curr != NULL)
	{
		curr = curr->next;
		c++;
	}
	return (c);
}
