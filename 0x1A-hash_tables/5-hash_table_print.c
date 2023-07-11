#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	int n = 1;
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!n)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);

			current = current->next;
			n = 0;
		}
	}
	printf("}\n");
}
