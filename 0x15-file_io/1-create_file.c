#include "main.h"
/**
 * _strlen - return length of a string.
 * @s: the string.
 * Return: len length of string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
	len++;
	s++;
	}
	return (len);
}
/**
 * create_file- creates a files.
 * @filename: the name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f, wr, length = 0;

	length = _strlen(text_content);
	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	wr = write(f, text_content, length);
	if (wr == -1)
		return (-1);
	close(f);
	return (1);
}
