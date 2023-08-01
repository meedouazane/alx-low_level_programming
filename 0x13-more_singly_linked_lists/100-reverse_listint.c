#include "lists.h"
/**
 * reverse_listint - reverses a list.
 * @head: the root of the list.
 * Return: reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *tmp = NULL;

	if (!*head)
		return (NULL);
	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = tmp;
	}
	*head = prev;
	return (*head);
}
