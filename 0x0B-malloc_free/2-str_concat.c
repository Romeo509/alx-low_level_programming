#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*str_concat - Concatenates two strings into a new string.
*@s1: The first string.
*@s2: The second string.
*
*Return: A pointer to the concatenated string, or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *concatenated;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
concatenated = (char *)malloc(strlen(s1) + strlen(s2) + 1);
if (concatenated == NULL)
{
return (NULL);
}
strcpy(concatenated, s1);
strcat(concatenated, s2);
return (concatenated);
}

