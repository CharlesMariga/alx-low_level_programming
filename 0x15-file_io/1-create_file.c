#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: string to write to the file
 *
 * Description: creates a file and writes content to it
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text_count = 0, write_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		text_content = "";
	}

	while (*(text_content + text_count))
		text_count++;

	write_status = write(fd, text_content, text_count);
	if (write_status == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
