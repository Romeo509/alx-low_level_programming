#include "main.h"
#include <stdbool.h>

/**
* is_separator - Checks if a character is a word separator.
* @c: The character to check.
*
* Return: true if the character is a separator, false otherwise.
*/
bool is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
for (int i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
return (true);
}
return (false);
}

/**
* cap_string - Capitalizes all words in a string.
* @str: The string to capitalize.
*
* Return: A pointer to the resulting string.
*/
char *cap_string(char *str)
{
bool new_word = true;
char *ptr = str;
while (*str != '\0')
{
if (is_separator(*str))
{
new_word = true;
}
else if (new_word)
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - ('a' - 'A');
}
new_word = false;
}
str++;
}
return (ptr);
}
