#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * shash_table_create - create hash table.
 * @size: size of hash table
 * Return: created table or NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_ht;
	unsigned long int i;

	new_ht = malloc(sizeof(shash_table_t));
	if (!new_ht)
		return (NULL);
	new_ht->size = size;
	new_ht->array = malloc(sizeof(shash_table_t) * size);
		if (!new_ht->array)
		{
			free(new_ht);
			return (NULL);
		}
	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;
	return (new_ht);
}
/**
 * shash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update.
 * @key: is the key.
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;
	shash_node_t *current;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key we are looking for.
 * Return: value associated with the element or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
/**
 * shash_table_print - function that prints a hash table.
 * @ht: hash table
 * Return: Always 0
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current;
	int comma = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			comma = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function that prints a hash table in reverse.
 * @ht: hash table
 * Return: Always 0
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	(void) ht;
}
/**
 * shash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 * Return: Always 0
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *tmp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			tmp = current;
			current = current->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
