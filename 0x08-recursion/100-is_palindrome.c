#include "main.h"
/**
 * palindrome- compaire two strings one of them is backword.
 * start: starting from the first digit 0.
 * end: starting from last digit.
 * @s: input string
 * return: 0 or 1 if it's palindrome.
 * Return: returns length of a string
 */
int _strlen_recursion(char *s);
int is_palindrome(char *s);

int palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
	return (0);

	return (palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome- returns 1 if a string is a palindrome and 0 if not.
 * @s: input string.
 * Return: returns 1 if a string is a palindrome, 0 if it's not.
 */

int is_palindrome(char *s)
{
	int end = _strlen_recursion(s) - 1;
	int start = 0;

	return (palindrome(s, start, end));
}

/**
 * _strlen_recursion- returns the length of a string
 * @s: input string
 * Return: length of a string
 *return: lenghth.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
	i++;
	return (1 +  _strlen_recursion(s + 1));
	}
	return (i);
}

