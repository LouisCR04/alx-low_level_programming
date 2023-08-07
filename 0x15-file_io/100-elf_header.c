#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *main - Entry point
 *@argc: Argument Count
 *@argv: Arguments
 *
 * Return: Always 0
 */
int main(int argc, char  *argv[])
{
	int fd;

	if (argc != 2)
		exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	close(fd);
	return (0);
}
