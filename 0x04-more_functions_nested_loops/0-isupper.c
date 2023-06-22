#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c : character that we'll cheack
 * return- 0 if it lower 1 for uper
 */

int _isupper(int c)
{

	if (c >= 65 && c <=90)
		return (1);
	else
		return (0);
}
