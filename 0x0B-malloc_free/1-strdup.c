#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*_strdup - Duplicates a string using malloc.
*@str: The string to be duplicated.
*
*Return: A pointer to the duplicated string, or 0 on failure.
*/
char *_strdup(char *str)
{
char *duplicate;
if (str == 0)
{
return (0);
}
duplicate = (char *)malloc(strlen(str) + 1);
if (duplicate == 0)
{
return (0);
}
strcpy(duplicate, str);
return (duplicate);
}

