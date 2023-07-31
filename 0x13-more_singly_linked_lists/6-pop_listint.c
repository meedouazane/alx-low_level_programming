#include "lists.h"
/**
 * pop_listint - deletes the head node of a list.
 * @head: the root of the list.
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	i = tmp->n;
	free(tmp);
	return (i);
}
