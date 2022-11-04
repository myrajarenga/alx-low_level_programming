#include "main.h"


/**
 *
 *
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if(filename == NULL)
		return (-1);

	if(text_content == NULL)
		text0_content = "";
	fd = open(filename, O_WRONLY | 0_APPEND)
	if (fd == -1);
		return (-1);

	w= write(fd, text_content, strlen(text_content));
	close(fd);

	return ((w < 0) ? (-1) : 1)

}

