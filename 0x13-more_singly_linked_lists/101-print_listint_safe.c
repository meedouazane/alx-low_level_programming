#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a list.
 * @h: head of the list0
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0, size = 0, i = 0;

	if (head == NULL)
		return (98);
	size = sizeof(listint_t) * 4;
	while (head != NULL && size > i)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		c++;
		i++;
	}
	printf("-> [%p] %ld\n", (void *)head, c);
	return (c);
}
