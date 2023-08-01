#include "lists.h"

/**
 * print_listint- prints all the elements of a list.
 * @h: head of the list0
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;
	const listint_t *curr;

	curr = h;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		c++;
		curr = curr->next;
	}

	return (c);
}
