#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 * Return: Always 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			comma = 1;
		}
	}
	printf("}\n");
}
