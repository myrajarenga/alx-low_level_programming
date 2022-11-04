#include "main.h"

/**
 * read_textfile - reads atextfile and print it to POSIX
 * @filename: pointer to filename
 * @letters:numbers of bytes to be read.
 *
 * Return:ssize_t of letters it reads and print 0 if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	size_t x = 0, i;
	char *buf;


	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < -1)
		return (0);

	i = read(fd, buf, letters);
	buf[i] = '\0';

	x = write(STDOUT_FILENO, buf, i);

	if (x != i)
		return (0);
	free(buf);
	close(fd);
	return (x);
}
