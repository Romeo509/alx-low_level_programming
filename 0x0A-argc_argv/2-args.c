#include <stdio.h>
#include "main.h"
/**
*main - Print all arguments received.
*@argc: Number of arguments.
*@argv: Array of argument strings.
*
*Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("Argument %d: %s\n", i, argv[i]);
}
return (0);
}

