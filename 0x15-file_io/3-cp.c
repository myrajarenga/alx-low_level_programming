#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * main - copies content froom one file to another
 *
 * @ac:argument count
 * @av: argument vector
 *
 * Return:97 when ac is incorrect
 * 98 if file doesnt exist
 * 99 if you cannot write and create files
 * 100 if you do not close the file discriptor(fd)
 */
int main(int ac, char **av)
{
	int fd1, fd2, w;
	int cl1, cl2, r;
	char buf1[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 00664);
	if (fd1 == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	r = read(fd1, buf1, 1024);
	w = write(fd2, buf1, r);

	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	cl1 = close(fd1);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	cl2 = close(fd2);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}

