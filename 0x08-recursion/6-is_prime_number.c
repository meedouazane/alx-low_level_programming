#include "main.h"

/**
 *_sqrt- check for root square from 1.
 * @i: the starting number to check.
 * @n: input number
 * Return: the natural square root of a number
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
/**
 *_sqrt_recursion- function that returns the natural square root of a number.
 * @n: input number
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * prime_number- check if number is prime number
 * @n: input number.
 * @i: starting number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int prime_number(int n, int i)
{
	if (n < 2)
		return (0);
	else if (i > _sqrt_recursion(n))
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (prime_number(n, i + 1));
}

/**
 * is_prime_number- check if number is prime number;
 * @n: input number
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_number(n, 2));
}
