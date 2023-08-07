#include "main.h"

/**
 *create_file - A fx that creates a file
 *@filename: Name of file to be created
 *@text_content: A null terminated string to write to the file
 *
 * Return:1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n = 0;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		n = write(fd, text_content, len);
	}
	close(fd);

	if (n < 0)
		return (-1);

	return (1);
}
