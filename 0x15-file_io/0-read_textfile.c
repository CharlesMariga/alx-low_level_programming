#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: name to be read and printed
 * @letters: number of letters it could read and print
 *
 * Description: reads a text file and prints to the POSIX
 * standard output
 *
 * Return: number of letters it culd read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_check, wcount;


	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_check = read(fd, buf, sizeof(char) * letters);
	if (read_check == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wcount = write(STDOUT_FILENO, buf, read_check);
	if (wcount == -1 || read_check != wcount)
		return (0);

	free(buf);
	close(fd);

	return (wcount);
}
