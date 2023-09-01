#include "main.h"

/**
*_strstr - Locates a substring.
*@haystack: The string to search in.
*@needle: The substring to search for.
*Return: If the substring is found, return a pointer to the beginning
*         of the located substring; otherwise, return NULL.
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *start = haystack;
char *sub = needle;
while (*sub && *haystack && (*sub == *haystack))
{
sub++;
haystack++;
}
if (!*sub)
return (start);
haystack = start + 1;
}
return (0);
}

