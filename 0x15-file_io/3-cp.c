#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void good_file(int fd);

/**
*good_file - to close file.
*@fd: the closed file descriptor.
*/
void good_file(int fd)
{
int g;
g = close(fd);
if (g == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
*create_buffer - creates a buffer
*@file: The file
*
*Return: buffer
*/
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
*main - entry poin.
*@argc: arg.
*@argv: arguments.
*
*Return: 0
*/
int main(int argc, char *argv[])
{
int fun, run, ric, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
fun = open(argv[1], O_RDONLY);
ric = read(fun, buffer, 1024);
run = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (fun == -1 || ric == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

w = write(run, buffer, ric);
if (run == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

ric = read(fun, buffer, 1024);
run = open(argv[2], O_WRONLY | O_APPEND);
} while (ric > 0);

free(buffer);
good_file(fun);
good_file(run);
return (0);
}
