#include "main.h"

/**
* _strcmp - Compares two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: 0 if the strings are equal, a negative value if s1 is less than s2,
* and a positive value if s1 is greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
