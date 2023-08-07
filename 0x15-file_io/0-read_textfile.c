#include "main.h"

/**
 *read_textfile - Reads a text file and prints it to the POSIX std output
 *@filename: Name of file to read
 *@letters: No. of letters to print
 *
 * Return:actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n = 0, m = 0;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	n = read(fd, buf, letters);
	if (n < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}

	m = write(STDOUT_FILENO, buf, n);
	if (m != n)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (n);
}
