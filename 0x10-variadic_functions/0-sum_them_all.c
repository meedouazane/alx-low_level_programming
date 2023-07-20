#include "variadic_functions.h"

/**
 * sum_them_all -  sum of all the parameters.
 * @n: number of parametres.
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ar;

	va_start(ar, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(ar, unsigned int);
	}
	else
		return (0);
	va_end(ar);
	return (sum);

}



