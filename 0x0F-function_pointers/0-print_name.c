#include "function_pointers.h"
/**
 * print_name- prints a name.
 * @name: the name.
 * @f: pointer function.
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
	f(name);
	}
}
