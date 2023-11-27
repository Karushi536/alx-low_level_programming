#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: 0 on success, exit codes on failure.
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, read_status, write_status;
    char buffer[BUF_SIZE];

    // Check if the number of arguments is correct
    if (argc != 3)
    {
        dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    // Open the source file in read-only mode
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    // Open the destination file in write-only mode, create if not exists, truncate
    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", argv[2]);
        close(fd_from);
        exit(99);
    }

    // Read from the source file and write to the destination file
    while ((read_status = read(fd_from, buffer, BUF_SIZE)) > 0)
    {
        write_status = write(fd_to, buffer, read_status);
        if (write_status != read_status)
        {
            dprintf(2, "Error: Can't write to %s\n", argv[2]);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }

    // Check for read errors
    if (read_status == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        close(fd_from);
        close(fd_to);
        exit(98);
    }

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd\n");
		exit(100);
	}

	return (0);
}
