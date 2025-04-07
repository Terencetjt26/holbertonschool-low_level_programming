#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
* print_error - prints an error message and exits with the given code
* @exit_code: the exit code
* @format: error message format
* @arg: argument to print in the error message
*/
void print_error(int exit_code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(exit_code);
}

/**
* main - copies content of a file to another file
* @ac: number of arguments
* @av: array of arguments
*
* Return: 0 on success, exits otherwise
*/
int main(int ac, char **av)
{
	int fd_from, fd_to, r, w;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		print_error(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to %s\n", av[2]);
	}

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to %s\n", av[2]);
		}
	}

	if (r == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
