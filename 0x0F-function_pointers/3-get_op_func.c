#include "3-calc.h"
/**
 * get_op_func- selects the correct function to perform the operation.
 * @s: the operator passed as argument to the program.
 * return: pointer to the function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
	if (s && s[0] == ops[i].op[0] && !s[i])
	return (ops[i].f);
	}
	return (NULL);
}
