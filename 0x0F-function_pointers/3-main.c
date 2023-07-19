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
	char *op;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	result = (*get_op_func(op))(a, b);
	printf("%d\n", result);
	return (0);
}

