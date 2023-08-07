#include "main.h"
/**
 * read_textfile- reads a text file and prints.
 * @filename: the file that we'll read.
 * @letters: number of letters that we'll print.
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t c = 0;
	char t;
	FILE *f;

	if (filename == NULL)
		return (0);
	f = fopen(filename, "r");
	if (f == NULL)
		return (0);
	while ((t = getc(f)) != EOF && c < letters)
	{
		if ((write(STDOUT_FILENO, &t, 1)) != 1)
		{
			fclose(f);
			return (0);
		}
		c++;
	}
	fclose(f);
	return ((ssize_t)c);
}
