#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, a;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (file_descriptor < 0)
		return (-1);

	if (text_content)
	{
		a = 0;
		while (text_content[a])
			a++;
		write_status = write(file_descriptor, text_content, a);
		if (write_status < 0)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);

	return (1);
}
