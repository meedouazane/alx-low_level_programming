#include "lists.h"
/**
 * list_len - number of elements in a linked list.
 * @h: head of the list.
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
