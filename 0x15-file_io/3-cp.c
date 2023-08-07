#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 *cpy_file - Copies contents of one file to another
 *@src: Name of file to copy from
 *@dest: Name of file to copy to
 *
 * Return: void
 */
void cpy_file(char *src, char *dest);

/**
 *_closeFL- Closesa file
 *@fd: File descriptor
 *
 * Return: void
 */
void _closeFL(int fd);

/**
 *_writerr - Outputs error if write fails
 *@filename: Name of file being referred to
 *
 * Return: void
 */
void _writerr(char *filename);

/**
 *_readerr - Outputs error if read fails
 *@filename: Name of file being referred to
 *
 * Return: void
 */
void _readerr(char *filename);

/**
 *main -Entry point
 *@argc: Argument count from terminal
 *@argv: Argument string
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cpy_file(argv[1], argv[2]);

	return (0);
}

/**
 *cpy_file - Copies contents of one file to another
 *@src: Name of file to copy from
 *@dest: Name of file to copy to
 *
 * Return: void
 */
void cpy_file(char *src, char *dest)
{
	int fd_src, fd_dest;
	ssize_t n_src, n_dest;
	char *buf;

	fd_src = open(src, O_RDONLY);
	if (fd_src < 0)
		_readerr(src);

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		_closeFL(fd_src);
		_writerr(dest);
	}

	fd_dest = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_dest < 0)
	{
		free(buf);
		_closeFL(fd_src);
		_writerr(dest);
	}

	while ((n_src = read(fd_src, buf, 1024)) > 0)
	{
		n_dest = write(fd_dest, buf, n_src);

		if (n_dest < 0)
		{
			free(buf);
			_closeFL(fd_src);
			_closeFL(fd_dest);
			_writerr(dest);
		}
	}
	if (n_src < 0)
	{
		free(buf);
		_closeFL(fd_src);
		_readerr(src);
	}

	free(buf);
	_closeFL(fd_src);
	_closeFL(fd_dest);
}

/**
 *_readerr - Outputs error if read fails
 *@filename: Name of file being referred to
 *
 * Return: void
 */
void _readerr(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 *_writerr - Outputs error if write fails
 *@filename: Name of file being referred to
 *
 * Return: void
 */
void _writerr(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
	exit(99);
}

/**
 *_closeFL- Closesa file
 *@fd: File descriptor
 *
 * Return: void
 */
void _closeFL(int fd)
{
	int n;

	n = close(fd);
	if (n < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd);
		exit(100);
	}
}
