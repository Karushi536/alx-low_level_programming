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
	int file_des1, file_des2, sto;
	char bufa[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_des1 =  open(argv[1], O_RDONLY, 0);
	if (file_des1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_des2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_des2 == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((sto = read(file_des1, bufa, 1024)) > 0)
	{
		if (write(file_des2, bufa, sto) != sto)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (sto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_des1) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_des1), exit(100);
	}
	if (close(file_des2) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_des2), exit(100);
	}
	return (0);
}
