#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: size of hashtable array
 * Return: pointer to the created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}

