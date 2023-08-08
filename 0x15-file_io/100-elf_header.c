#include "main.h"
/**
 * print_elf- print elf header.
 * @elf_header: header
 * Return: Always 0.
 */

void print_elf(const Elf64_Ehdr *elf_header)
{
	int i = 0;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");
	printf("  Class:                %d\n", elf_header->e_ident[EI_CLASS]);
	printf("  Data:                 %d\n", elf_header->e_ident[EI_DATA]);
	printf("  Version:              %d\n", elf_header->e_version);
	printf("  OS/ABI:               %d\n", elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version           %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:			%d\n", elf_header->e_type);
	printf("  Entry point address:	0x%lx\n", elf_header->e_entry);
}
/**
 * main - check the code
 * @ac: number of arg being passed.
 * @av: array of arg being passed.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int f;
	Elf64_Ehdr header;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf_filename>\n", av[0]);
		exit(98);
	}
	f = open(av[1], O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Can't open the file %s\n", av[1]);
		exit(98);
	}

	if (read(f, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Can't read from %s\n", av[1]);
		exit(98);
	}

	if (header.e_ident[0] != 0x7f)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", av[0]);
		exit(98);
	}

	print_elf(&header);
	if (close(f))
	{
		dprintf(STDERR_FILENO, "Error: %d can't close\n", f);
		exit(98);
	}
	return (0);
}
