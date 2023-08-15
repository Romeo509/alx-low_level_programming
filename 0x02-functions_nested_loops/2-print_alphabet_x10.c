#include "main.h"

/**
*print_alphabet_x10 - print lowercase ten times
*
*Return: Always 0.
*/

void print_alphabet_x10(void)
{
int count = 0;
char alphabet;

while (count < 10)
{
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
count++;
_putchar('\n');
}
}
