#include "main.h"

/**
 * append_text_to_file - adds text at the end of file
 * @filename: name of file
 * @text_content: the string to be coped
 * Return: on 1 on sucessses or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, i;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(fd, text_content, i);
	if (status == -1)
		return (-1);
	close(fd);
	return (1);


}
