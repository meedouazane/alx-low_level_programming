#include "main.h"
/**
 * create_file- creates a files.
 * @filename: the name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f, wr, l;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l]; l++)
			;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	wr = write(f, text_content, l);
	if (wr == -1)
		return (-1);

	close(f);

	return (1);
}

