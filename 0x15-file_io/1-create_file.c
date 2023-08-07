#include "main.h"
/**
 * create_file- creates a files.
 * @filename: the name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT, 0600);
	if (f == -1)
		return (-1);

	write (f, text_content, sizeof(text_content) - 1);
	close(f);
	return (1);
}


