#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * print_usage_and_exit - Prints usage message and exits with code 97.
 */
void print_usage_and_exit(void)
{
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
}

/**
 * open_files - Opens source and destination files.
 * @src: The source file path.
 * @dest: The destination file path.
 * @file_from: File descriptor for the source file.
 * @file_to: File descriptor for the destination file.
 *
 * Return: 0 on success, or an exit code indicating failure.
 */
int open_files(const char *src, const char *dest, int *file_from, int *file_to)
{
    *file_from = open(src, O_RDONLY);
    if (*file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
        return 98;
    }

    *file_to = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (*file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
        close(*file_from);
        return 99;
    }

    return 0;
}

/**
 * copy_content - Copies content from source file to destination file.
 * @file_from: File descriptor for the source file.
 * @file_to: File descriptor for the destination file.
 *
 * Return: 0 on success, or an exit code indicating failure.
 */
int copy_content(int file_from, int file_to)
{
    char buffer[BUFFER_SIZE];
    ssize_t nread, nwrite;

    while ((nread = read(file_from, buffer, sizeof(buffer))) > 0)
    {
        nwrite = write(file_to, buffer, nread);
        if (nwrite != nread)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", "destination_file");
            return 99;
        }
    }

    if (nread == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", "source_file");
        return 98;
    }

    return 0;
}

/**
 * close_files - Closes the file descriptors.
 * @file_from: File descriptor for the source file.
 * @file_to: File descriptor for the destination file.
 */
void close_files(int file_from, int file_to)
{
    if (close(file_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }

    if (close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, or an exit code indicating failure.
 */
int main(int argc, char *argv[])
{
    int file_from, file_to;
    int result;

    if (argc != 3)
        print_usage_and_exit();

    result = open_files(argv[1], argv[2], &file_from, &file_to);
    if (result != 0)
        exit(result);

    result = copy_content(file_from, file_to);
    if (result != 0)
    {
        close_files(file_from, file_to);
        exit(result);
    }

    close_files(file_from, file_to);

    return 0;
}
