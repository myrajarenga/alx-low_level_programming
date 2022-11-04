#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename> pointer to file name
 * @text_content:pointer to the text content
 * Return: 1 on succes , -1 of fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return(-1)
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | CREATE | 0_TRUNC, 0600);
	if (fd < 0)
	return(-1);

	w = write(fd, text_content, strlen(text_content;
	close(fd);

	if (w < 0);
	{
		return (-1);
	}
	else
	return (1);
}
