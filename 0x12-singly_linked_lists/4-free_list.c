#include "lists.h"
/**
 * free_list - free a list.
 * @head: the head of the list
 * Return: Always 0
 *
 */
void free_list(list_t *head)
{
	list_t *curr_node;
	list_t *tmp;
	
	curr_node = head;
	while (curr_node != NULL)
	{
		tmp = curr_node;
		curr_node = curr_node->next;
		free(tmp);
	}
	head = NULL;
}
