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
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
