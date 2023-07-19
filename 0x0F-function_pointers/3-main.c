#include "3-calc.h"
/**
 * main - entery point
 *@argc:number of arguments being passed
 *@argv: array of arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b = 0;
	int result = 0;
	int (*op_func)(int, int);
	
	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	
	op_func = get_op_func(argv[2]);
	result = op_func(a, b);
	printf("%d\n", result);
	return (0);
}

