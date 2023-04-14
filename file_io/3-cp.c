#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number arguments
 * @argv: array arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fd_read, fd_write, x_read, close1, close2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_read = open(argv[1], O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x_read = read(fd_read, buffer, 1024)) > 0)
	{
		if (fd_write == -1 || write(fd_write, buffer, x_read) != x_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_read);
			exit(99);
		}
	}
	if (x_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close1 = close(fd_read);
	close2 = close(fd_write);
	if (close1 == -1 || close2 == -1)
	{
		if (close1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		if (close2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	return (0);
}
