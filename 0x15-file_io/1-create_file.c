#include "main.h"
/**
 * create_file - creates new file
 * @filename: accepts filename of the fie to be created
 * @text_content: te file to be copied 
 *
 */
int create_file(const char *filename, char *text_content)
{
int fd, status, i;

if (filename == NULL)
	return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

if (fd == -1)
	return (-1);

if (text_content)
{
	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(fd, text_content, i);
	if (status == -1)
		return (-1);
}

close(fd);
return (1);
}
