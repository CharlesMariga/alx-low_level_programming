#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: text to append
 *
 * Description: appends text at the end of a file
 *
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status, text_count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!text_content && fd != -1)
		return (1);
	else if (!text_content && fd == -1)
		return (-1);

	for (text_count = 0; *(text_content + text_count) != '\0'; text_count++)
	;

	write_status = write(fd, text_content, text_count);
	if (write_status == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
