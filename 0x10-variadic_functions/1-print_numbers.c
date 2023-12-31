#include "variadic_functions.h"

/**
 * print_numbers- prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n:  number of integers passed to the function.
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;
	va_list ar;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ar, int);
		printf("%d", num);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}


