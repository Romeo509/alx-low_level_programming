#include "main.h"

/**
* _strstr - Locates a substring
* @haystack: The string to be searched
* @needle: The substring to be located
*
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (0);
}
