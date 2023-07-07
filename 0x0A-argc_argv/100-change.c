#include <stdio.h>
#include <stdlib.h>
/**
 * main- entery of the program
 * @argc:number of arguments being passed into a program
 * @argv:array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int rest, s;

	if (argc == 1)
	{
	printf("Error\n");
	return (0);
	}
	s = atoi(argv[1]);

	if (argc == 2 && s >  0)
	{
	rest = s / 25;
	rest += (s % 25) / 10;
	rest += ((s % 25) % 10) / 5;
	rest += (((s % 25) % 10) % 5) / 2;
	rest += ((((s % 25) % 10) % 5) % 2);
	printf("%d\n", rest);
	}
	else if (s <= 0)
		printf("0\n");
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
