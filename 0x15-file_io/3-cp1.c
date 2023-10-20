#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

#define BUFSIZE 1024

/**
* exit_with_error - Helper function to display an error message and exit.
* @code: Exit code.
* @message: Error message.
*/
void exit_with_error(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t n;
char buffer[BUFSIZE];
if (argc != 3)
exit_with_error(97, "Usage: cp file_from file_to");
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
exit_with_error(98, "Error: Can't read from file");
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
exit_with_error(99, "Error: Can't write to file");
while ((n = read(fd_from, buffer, BUFSIZE)) > 0)
{
if (write(fd_to, buffer, n) != n)
exit_with_error(99, "Error: Can't write to file");
}
if (n == -1)
exit_with_error(99, "Error: Can't write to file");
if (close(fd_from) == -1)
exit_with_error(100, "Error: Can't close fd");
if (close(fd_to) == -1)
exit_with_error(100, "Error: Can't close fd");
return (EXIT_SUCCESS);
}

