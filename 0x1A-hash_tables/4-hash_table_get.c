#include "hash_tables.h"
#include <string.h>

/**
* hash_table_get - Retrieves a value associated with a key in the hash table
* @ht: The hash table to look into
* @key: The key to search for
*
* Return: value or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *temp;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((unsigned char *)key, ht->size);

temp = ht->array[index];

while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
return (temp->value);

temp = temp->next;
}

return (NULL);
}
