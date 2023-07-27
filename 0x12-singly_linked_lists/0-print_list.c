#include "lists.h"
/**
 * _strlen - return length of a string.
 * @s: the string.
 * Return: len length of string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
	len++;
	s++;
	}

	return (len);
}
/**
 * print_list - prints all the elements of a list.
 * @h: head of list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", _strlen(h->str), h->str);
		h = h->next;
		c++;
	}
	return (c);
}
