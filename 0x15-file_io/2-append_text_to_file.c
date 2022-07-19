#include "main.h"

/**
* append_text_to_file - it will append text at end of file
* @filename: is just the file to append the text to
* @text_content: is the content to append into a file
*
* Return: 1 means success and -1 means failed
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (!filename)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	return (-1);

	if (text_content)
{
	while (text_content[s])
	s++;
	t = write(fd, text_content, s);
	if (t != s)
	return (-1);
}

	close(fd);

	return (1);
}
