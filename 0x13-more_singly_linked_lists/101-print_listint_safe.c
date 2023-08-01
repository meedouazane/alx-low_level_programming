#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a list.
 * @h: head of the list0
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0, size = 0, i = 0;
	const listint_t *curr;

	if (head == NULL)
		return (98);
	size = sizeof(listint_t);
	curr = head;
	while (curr != NULL && size > i)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
		c++;
		i++;
	}
	printf("-> [%p] %ld\n", (void *)curr, c);
	return (c);
}
