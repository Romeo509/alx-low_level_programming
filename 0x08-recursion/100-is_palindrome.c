#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(char *s, int start, int end);

/**
*is_palindrome - Checks if a string is a palindrome.
*@s: The string to be checked.
*Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
return (check_palindrome(s, 0, length - 1));
}

/**
*_strlen_recursion - find the length of a string using recursion.
*@s: The string for which length is to be calculated.
*Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

/**
*check_palindrome - check if a string is palindrome using recursion.
*@s: The string to be checked.
*@start: The starting index of the current comparison.
*@end: The ending index of the current comparison.
*Return: 1 if the string is a palindrome, 0 otherwise.
*/
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (check_palindrome(s, start + 1, end - 1));
}
