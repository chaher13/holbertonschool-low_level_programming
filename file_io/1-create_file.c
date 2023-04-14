#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: longueur string
 * Return: value string
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s++)
		a++;
	return (a);
}

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: string to write into the file
 * Return: 1 or -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		write(fd, text_content, len);
		if (len == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
