#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
* error_exit - Print error and exit with given code
*/
void error_exit(int code, const char *msg, const char *filename, int fd)
{
	if (filename)
		dprintf(STDERR_FILENO, msg, filename);
	else
		dprintf(STDERR_FILENO, msg, fd);
	exit(code);
}

/**
* main - copies the content of a file to another file
* @ac: argument count
* @av: argument vector
* Return: 0 on success, exits with error codes on failure
*/
int main(int ac, char **av)
{
	int fd_from, fd_to, r, w;
	char buffer[BUF_SIZE];

	if (ac != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL, 0);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", av[1], 0);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", av[2], 0);

	while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
			error_exit(99, "Error: Can't write to %s\n", av[2], 0);
	}

	if (r == -1)
		error_exit(98, "Error: Can't read from file %s\n", av[1], 0);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", NULL, fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", NULL, fd_to);

	return (0);
}
