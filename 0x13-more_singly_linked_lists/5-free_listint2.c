#include "lists.h"
/**
 * free_listint2 - frees a list.
 * @head : the root of the list.
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *next;

	if (head == NULL)
		return;

	curr = *head;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*head = NULL;
}
