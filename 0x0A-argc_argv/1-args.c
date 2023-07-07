#include <stdio.h>
/**
 * main- entery of the program
 * @argc:number of arguments being passed into a program
 * @argv:array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
