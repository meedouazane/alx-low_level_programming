#include "main.h"

/**
 * sqrt- check for root square from 1.
 * @i: the starting number to check.
 * @n: input number
 * Return: the natural square root of a number
 */

int sqrt(int n, int i)
{
	if (i * i > n)
	return (-1);
	else if (i * i == n)
	return (i);
	else
	return (sqrt(n, i + 1));

}

/*
 *_sqrt_recursion- function that returns the natural square root of a number.
 *@n: input number
 *Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
