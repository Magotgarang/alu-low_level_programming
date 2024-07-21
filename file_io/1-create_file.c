#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates a file with the given filename and writes text to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t len;

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = write(file_d, text_content, strlen(text_content));
		if (len == -1)
		{
			close(file_d);
			return (-1);
		}
	}

	close(file_d);
	return (1);
}
