#ifndef DOG_H
#define DOG_H
/**
*struct dog - dog itself
*@name: name of the dog
*@age: age of the dog
*@owner: wner of the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

