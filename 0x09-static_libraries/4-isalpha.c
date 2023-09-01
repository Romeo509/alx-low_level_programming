#include "main.h"

/**
*_isalpha - Checks if a character is an alphabetic character (a letter).
*@c: The character to be checked.
*Return: 1 if c is a letter (uppercase or lowercase), 0 otherwise.
*/
int _isalpha(int c)
{
return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')));
}

