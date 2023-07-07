#include "main.h"

/**
 * _isalpha - function that cheack if input is alphaetic
 * @c: the character that we cheack
 *
 * Return: 1 is it's alphabetic 0 if it's not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 120) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
