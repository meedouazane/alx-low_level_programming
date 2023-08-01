#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a list.
 * @h: head of the list0
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0, i = 0;
	const listint_t *curr;
	const listint_t *visited[1024] = {NULL};

	if (head == NULL)
		return (98);
	curr = head;
	while (curr != NULL)
	{
		for (; i < c; i++)
		{
			if (visited[i] == curr)
				return (98);
		}
		visited[c] = curr;

		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
		c++;
	}
	return (c);
}
