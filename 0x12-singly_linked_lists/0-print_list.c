#include "lists.h"
/**
 * print_list - prints all the elements of a list.
 * @h: head of list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%ld] %s\n", strlen(h->str), h->str);
		h = h->next;
		c++;
	}
	return (c);
}
