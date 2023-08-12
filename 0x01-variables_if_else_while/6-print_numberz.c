#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main -Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int integer;
for (integer = '0' ; integer <= '9' ; integer++)
{
putchar(integer);
}
putchar('\n');
return (0);
}
