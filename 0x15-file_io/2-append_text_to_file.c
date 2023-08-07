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
 * append_text_to_file- appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t ap;

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	ap = write(f, text_content, _strlen(text_content));
	if (ap == -1)
	{
		close(f);
		return (-1);
	}
	close(f);
	return (1);
}
