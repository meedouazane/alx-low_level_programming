#include "main.h"
/**
 * main - check the code
 * @ac: number of arg being passed.
 * @av: array of arg being passed.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *file_from = av[1], *file_to = av[2], buffer[1024];
	int ff, ft, wr, rd;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ff = open(file_from, O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	ft = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((rd = read(ff, buffer, sizeof(buffer))) > 0)
	{
		wr = write(ft, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
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
