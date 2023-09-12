#include <stdlib.h>
#include "dog.h"

/**
*_strdup - Duplicates a string.
*@str: The string to duplicate.
*
*Return: A pointer to the newly allocated string, or NULL on failure.
*/
char *_strdup(char *str)
{
unsigned int len, i;
char *dup;
if (str == NULL)
return (NULL);
len = 0;
while (str[len])
len++;
len++;
dup = malloc(len *sizeof(char));
if (dup == NULL)
return (NULL);
for (i = 0; i < len; i++)
dup[i] = str[i];
return (dup);
}

/**
*new_dog - Creates a new dog.
*@name: Name of dog.
*@age: Age of dog.
*@owner: Owner of dog.
*
*Return: Pointer to new dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = _strdup(name);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = _strdup(owner);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->age = age;
return (dog);
}
