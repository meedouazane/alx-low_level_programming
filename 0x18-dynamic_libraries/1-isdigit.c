#include "main.h"

/**
 * _isdigit - checks for uppercase character
 * @c : character that we'll cheack
 * Return:  0 if it lowercase and 1 for upercase.
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
