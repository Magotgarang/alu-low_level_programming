#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int file_d;
    ssize_t len, written;

    if (filename == NULL)
        return (-1);

    file_d = open(filename, O_WRONLY | O_APPEND);
    if (file_d == -1)
        return (-1);

    if (text_content == NULL)
    {
        close(file_d);
        return (1);
    }

    len = strlen(text_content);
    written = write(file_d, text_content, len);
    if (written == -1 || written != len)
    {
        close(file_d);
        return (-1);
    }

    if (close(file_d) == -1)
        return (-1);

    return (1);
}

