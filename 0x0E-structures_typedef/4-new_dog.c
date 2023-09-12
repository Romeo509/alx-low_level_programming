#include <stdlib.h>
#include "dog.h"

/**
*new_dog - Create a new dog with name, age, and owner.
*@name: Pointer to a string for the dog's name.
*@age: Age of the dog.
*@owner: Pointer to a string for the dog's owner.
*
*Return: Pointer to the newly created dog_t struct, or NULL on failure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
{
return (NULL);
}
dog_t *newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
int nameLength = 0;
while (name[nameLength] != '\0')
{
nameLength++;
}
int ownerLength = 0;
while (owner[ownerLength] != '\0')
{
ownerLength++;
}
newDog->name = malloc((nameLength + 1) * sizeof(char));
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
newDog->owner = malloc((ownerLength + 1) * sizeof(char));
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
for (int i = 0; i <= nameLength; i++)
{
newDog->name[i] = name[i];
}
for (int i = 0; i <= ownerLength; i++)
{
newDog->owner[i] = owner[i];
}
newDog->age = age;
return (newDog);
}
