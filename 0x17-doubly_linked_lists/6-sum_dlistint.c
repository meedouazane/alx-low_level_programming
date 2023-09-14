#include "lists.h"
/**
 * sum_dlistint -  the sum of values in list.
 * @head: the head of the list.
 * Return: the sum of node in list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
