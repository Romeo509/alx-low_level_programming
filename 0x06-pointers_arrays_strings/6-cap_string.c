#include "main.h"

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
{
return (true);
}
}
return (false);
}
char *cap_string(char *str)
{
bool new_word = true;
for (int i = 0; str[i] != '\0'; i++)
{
if (is_separator(str[i]))
{
new_word = true;
}
else if (new_word && isalpha(str[i]))
{
str[i] = toupper(str[i]);
new_word = false;
}
else
{
str[i] = tolower(str[i]);
}
}
return (str);
}
