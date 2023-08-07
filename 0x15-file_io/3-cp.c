#include "main.h"
/**
 * main - check the code
 * @ac: number of arg being passed.
 * @av: array of arg being passed.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int ff = 0, ft = 0, wr = 0, rd = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rd = read(ff, buffer, 1024)) > 0)
	{
		wr = write(ft, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(ff) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	if (close(ft) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
	return (0);
}
