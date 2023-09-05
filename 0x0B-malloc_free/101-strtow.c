#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*strtow - Splits a string into words.
*@str: The input string.
*
*Return: A pointer to an array of strings (words), or NULL on failure.
*/
char **strtow(char *str)
{
if (!str || !*str)
{
return (NULL);
}
int word_count = 0;
char **words = NULL;
char *token = strtok(str, " ");
while (token)
{
word_count++;
token = strtok(NULL, " ");
}
if (word_count == 0)
{
return (NULL);
}
words = (char **)malloc((word_count + 1) * sizeof(char *));
if (!words)
{
return (NULL);
}
token = strtok(str, " ");
int i = 0;
while (token)
{
words[i] = strdup(token);
if (!words[i])
{
for (int j = 0; j < i; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
i++;
token = strtok(NULL, " ");
}
words[word_count] = NULL;
return (words);
}
