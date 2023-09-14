#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*@argc: The number of command-line arguments
*@argv: An array of command-line argument strings
*
*Return: 0 on success, or exit with status 1 or 2 on error
*/
int main(int argc, char *argv[])
{
int i = 0;
int num_bytes = atoi(argv[1]);
unsigned char *main_ptr;
if (argc != 2)
{
fprintf(stderr, "Error\n");
return (1);
}
if (num_bytes < 0)
{
fprintf(stderr, "Error\n");
return (2);
}
asm("mov %0, main_ptr" : "=r" (main_ptr));
while (i < num_bytes)
{
printf("%02x", (unsigned int)main_ptr[i]);
if (i < num_bytes - 1)
printf(" ");
else
printf("\n");
i++;
}
return (0);
}

