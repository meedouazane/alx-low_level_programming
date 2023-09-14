#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the head of linked list
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *temp;

	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
