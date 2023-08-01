#include "lists.h"
/**
 * free_listint_safe - frees a list.
 * @h : the root of the list.
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr;
	listint_t *next;
	int c = 0;

	curr = *h;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
		c++;
	}
	*h = NULL;
	return (c);
}
