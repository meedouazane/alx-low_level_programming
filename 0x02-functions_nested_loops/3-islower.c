#include "main.h"

/**
 * int _islower() - function that checks if char islowercase
 *
 * return: 1 if it's lowercase and 0 if it's not.
 */

int _islower(int c)
{
	
	
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}	
