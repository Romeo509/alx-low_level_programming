#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A double pointer to strings or NULL on failure.
 */
int countWords(char *s);
int startIndex(char *s, int index);
int endIndex(char *s, int index);

char **strtow(char *str)
{
int i, k, len, start, end, j = 0;
int words = countWords(str);
if (!str || !words)
return (NULL);
char **ptr = malloc(sizeof(char *) * (words + 1));
if (!ptr)
return (NULL);
for (i = 0; i < words; i++)
{
start = startIndex(str, j);
end = endIndex(str, start);
len = end - start;
ptr[i] = malloc(sizeof(char) * (len + 1));
if (!ptr[i])
{
i--;
while (i >= 0)
free(ptr[i--]);
free(ptr);
return (NULL);
}
for (k = 0; k < len; k++)
ptr[i][k] = str[start++];
ptr[i][k++] = '\0';
j = end + 1;
}
ptr[i] = (NULL);
return (ptr);
}

/**
 * isSpace - Determines if a character is a space.
 * @c: The input character.
 *
 * Return: 1 if true, 0 otherwise.
 */
int isSpace(char c)
{
	return (c == ' ');
}

/**
 * startIndex - Returns the first index of a non-space character.
 * @s: The input string.
 * @index: The starting index.
 *
 * Return: The index of the first non-space character.
 */
int startIndex(char *s, int index)
{
	while (isSpace(*(s + index)))
		index++;
	return (index);
}

/**
 * endIndex - Returns the last index of a non-space character.
 * @s: The input string.
 * @index: The starting index.
 *
 * Return: The index of the last non-space character.
 */
int endIndex(char *s, int index)
{
	while (!isSpace(*(s + index)))
		index++;
	return (index);
}

/**
 * countWords - Counts the number of words in a string.
 * @s: The input string.
 *
 * Return: The number of words.
 */
int countWords(char *s)
{
	int wordOn = 0;
	int words = 0;

	while (*s)
	{
		if (isSpace(*s) && wordOn)
			wordOn = 0;
		else if (!isSpace(*s) && !wordOn)
		{
			wordOn = 1;
			words++;
		}
		s++;
	}
	return (words);
}

