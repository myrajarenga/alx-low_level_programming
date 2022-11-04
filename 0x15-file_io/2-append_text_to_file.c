#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * append_text_to_file - function that appends text to end of file
 * @filename: name of the file
 * @text_content:contente to be appended
 * Return: 1 on succes ,  -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, strlen(text_content));
	close(fd);

	return ((w < 0) ? (-1) : 1);

}

