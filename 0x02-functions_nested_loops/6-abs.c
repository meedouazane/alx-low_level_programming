#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 *@n: giving number
 * Return: absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
	{
		int b = 0;
		b = (n * -1) ;
		return (b);
	}
	else	
		return (n);
}
