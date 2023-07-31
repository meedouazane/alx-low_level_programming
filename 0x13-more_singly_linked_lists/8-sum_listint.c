#include "lists.h"
/**
 * sum_listint -  the sum of values in list.
 * @head: the root of the list.
 * Return: the sum of node in list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr;

	if (head == NULL)
		return (0);
	curr = head;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
