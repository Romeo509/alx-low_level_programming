#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @s: The input string.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *s)
{
int count = 0;
int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
if (*(s + count) >= 'a' && *(s + count) <= 'z')
*(s + count) = *(s + count) - ('a' - 'A');
count++;
while (*(s + count) != '\0')
{
int separator_found = 0;
for (int i = 0; i < 13; i++)
{
if (*(s + count) == separators[i])
{
separator_found = 1;
if (*(s + (count + 1)) >= 'a' && *(s + (count + 1)) <= 'z')
*(s + (count + 1)) = *(s + (count + 1)) - ('a' - 'A');
break;
}
}
if (separator_found == 0 && *(s + count) >= 'A' && *(s + count) <= 'Z')
*(s + count) = *(s + count) +('a' - 'A');
count++;
}
return (s);
}
