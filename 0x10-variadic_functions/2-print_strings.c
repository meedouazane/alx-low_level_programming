#include "variadic_functions.h"

/**
 * print_strings- prints strings, followed by a new line
 * @separator: the string to be printed between numbers.
 * @n:  number of integers passed to the function.
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ar;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ar, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ar);
	printf("\n");
}


