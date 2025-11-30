#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* BUFFER_SIZE - size of buffer
*/

#define BUFFER_SIZE 1024

/**
 * close_fd - Closes a file descriptor and exits on failure
 * @fd: The file descriptor to close
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * print_read_error - Prints read error and exits
 * @filename: Name of the file that could not be read
 * @fd_from: File descriptor of file_from (-1 if not open)
 * @fd_to: File descriptor of file_to (-1 if not open)
 */

void print_read_error(char *filename, int fd_from, int fd_to)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	if (fd_from != -1)
		close(fd_from);
	if (fd_to != -1)
		close(fd_to);
	exit(98);
}

/**
 * print_write_error - Prints write error and exits
 * @filename: Name of the file that could not be written to
 * @fd_from: File descriptor of file_from (-1 if not open)
 * @fd_to: File descriptor of file_to (-1 if not open)
 */

void print_write_error(char *filename, int fd_from, int fd_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	if (fd_from != -1)
		close(fd_from);
	if (fd_to != -1)
		close(fd_to);
	exit(99);
}

/**
* main - copies content to another file
* @argc: argument within list
* @argv: array of arguments
* BUFFER_SIZE - size of buffer
* Return: int
*/

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_read_error(argv[1], -1, -1);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_write_error(argv[2], fd_from, -1);

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
			print_write_error(argv[2], fd_from, fd_to);
	}

	if (r == -1)
		print_read_error(argv[1], fd_from, fd_to);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
