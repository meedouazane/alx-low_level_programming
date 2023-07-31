#include "lists.h"
/**
 * free_listint - frees a list.
 * @head : the root of the list.
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *curr;
	listint_t *next;

	curr = head;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
