#include "variadic_functions.h"
/**
 * print_all- prints anything.
 * @format: list of types of arguments.
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *s = "";
	va_list ar;

	va_start(ar, format);
	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
		printf("%s%c", s, va_arg(ar, int));
		break;

		case 'i':
		printf("%s%d", s, va_arg(ar, int));
		break;

		case 'f':
		printf("%s%f", s, va_arg(ar, double));
		break;

		case 's':
		str = va_arg(ar, char *);

		if (str == NULL)
		str = "(nil)";
		printf("%s%s", s, str);
		break;
		default:
		i++;
		continue;
			}
		s = ", ";
		i++;
		}
	}
	printf("\n");
	va_end(ar);
}
