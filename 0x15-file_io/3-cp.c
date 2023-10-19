#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *file);
void close_descriptor(int fd);

/**
* allocate_buffer - Allocates a buffer.
* @file: name of the file for the buffer created.
*
* Return: newly-allocated buffer.
*/
char *allocate_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Unable to allocate buffer for %s\n", file);
exit(99);
}

return (buffer);
}

/**
* close_descriptor - Closes
* @fd: The file to be closed.
*/
void close_descriptor(int fd)
{
int status;

status = close(fd);
if (status == -1)
{
dprintf(STDERR_FILENO, "Error: Unable to close fd %d\n", fd);
exit(100);
}
}

/**
* main - Entry point.
* @argc: argument.
* @argv: An array
*
* Return: 0 .
*
*/
int main(int argc, char *argv[])
{
int source_fd, dest_fd, bytes_read, bytes_written;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: my_cp source_file destination_file\n");
exit(97);
}

buffer = allocate_buffer(argv[2]);
source_fd = open(argv[1], O_RDONLY);
bytes_read = read(source_fd, buffer, 1024);
dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (source_fd == -1 || bytes_read == -1)
{
dprintf(STDERR_FILENO,
"Error: Unable to read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

bytes_written = write(dest_fd, buffer, bytes_read);
if (dest_fd == -1 || bytes_written == -1)
{
dprintf(STDERR_FILENO,
"Error: Unable to write to %s\n", argv[2]);
free(buffer);
exit(99);
}

bytes_read = read(source_fd, buffer, 1024);
dest_fd = open(argv[2], O_WRONLY | O_APPEND);

} while (bytes_read > 0);

free(buffer);
close_descriptor(source_fd);
close_descriptor(dest_fd);

return (0);
}

