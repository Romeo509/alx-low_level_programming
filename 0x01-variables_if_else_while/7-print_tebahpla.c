#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char character;
for (character = 'z' ; character >= 'a' ; character--)
{
putchar(character);
}
putchar('\n');
return (0);
}
