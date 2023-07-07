#include <stdio.h>
/**
 * main- entery of the program
 * @argc:number of arguments being passed into a program
 * @argv:array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
