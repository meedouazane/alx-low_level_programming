#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of a dlistint_t list
 * Return: size of a dlistint_t list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t size = 0;

	if (h == NULL)
		return (0)
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		size++;
		current = current->next;
	}
	return (size);
}
