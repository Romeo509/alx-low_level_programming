#include <stdio.h>
#include "main.h"
/**
*main - Print all arguments received.
*@argc: Number of arguments.
*@argv: Array of argument strings.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);
return (0);
}

