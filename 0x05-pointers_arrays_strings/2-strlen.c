#include "main.h"

/**
*_strlen - defines the length of the string
*@s: Represents the pointer that will be changed
*Return: the corrects answer
*/
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length); 
}
