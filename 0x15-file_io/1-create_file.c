#include "main.h"

/**
* create_file - will create the file and fill it with text
* @filename: is the name of the file created
* @text_content: is the text to write in the file
*
* Return: 1 is success -1 means it failed
*/
int create_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (!filename)
	return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
