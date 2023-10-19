#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* open_source_file - Opens a source file for reading.
* @filename: The name of the source file to open.
*
* Return: The file descriptor if successful, -1 on failure.
*/
int open_source_file(const char *filename)
{
int fd = open(filename, O_RDONLY);

if (fd == -1)
{
dprintf(2, "Error: Can't read from %s\n", filename);
}

return (fd);
}

/**
* open_destination_file - Opens a destination file for writing.
* @filename: The name of the destination file to open.
*
* Return: The file descriptor if successful, -1 on failure.
*/
int open_destination_file(const char *filename)
{
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

if (fd == -1)
{
dprintf(2, "Error: Can't write to %s\n", filename);
}

return (fd);
}

/**
* copy_file_contents - Copies the contents of one file to another.
* @source_fd: The file descriptor of the source file.
* @destination_fd: The file descriptor of the destination file.
*
* Return: 0 on success, -1 on failure.
*/
int copy_file_contents(int source_fd, int destination_fd)
{
char buffer[1024];
ssize_t bytes_read, bytes_written;

while ((bytes_read = read(source_fd, buffer, sizeof(buffer)) > 0)
{
bytes_written = write(destination_fd, buffer, bytes_read);

if (bytes_written == -1)
{
dprintf(2, "Error: Can't write to destination file\n");
return (-1);
}
}

if (bytes_read == -1)
{
dprintf(2, "Error: Can't read from source file\n");
return (-1);
}

return (0);
}

/**
* close_file - Closes a file descriptor.
* @fd: The file descriptor to close.
*
* Return: 0 on success, -1 on failure.
*/
int close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd);
return (-1);
}

return (0);
}

/**
* main - Entry point of the program.
* @ac: The number of command line arguments.
* @av: An array of command line arguments.
*
* Return: 0 on success, 1 on error.
*/
int main(int ac, char **av)
{
int source_fd, destination_fd;

if (ac != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
return (97);
}

source_fd = open_source_file(av[1]);
if (source_fd == -1)
return (98);

destination_fd = open_destination_file(av[2]);
if (destination_fd == -1)
{
close_file(source_fd);
return (99);
}

if (copy_file_contents(source_fd, destination_fd) == -1)
{
close_file(source_fd);
close_file(destination_fd);
return (99);
}

if (close_file(source_fd) == -1 || close_file(destination_fd) == -1)
return (100);

return (0);
}

