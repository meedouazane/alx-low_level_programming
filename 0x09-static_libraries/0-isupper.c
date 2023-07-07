#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c : character that we'll cheack
 * Return:  0 if it lowercase and 1 for upercase.
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
