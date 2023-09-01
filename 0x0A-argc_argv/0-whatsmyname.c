#include <stdio.h>
#include "main.h"

/**
*main - Print the name of the program
*@argc: arguments
*@argv: Argument
*
*Return: 0
*/
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}

