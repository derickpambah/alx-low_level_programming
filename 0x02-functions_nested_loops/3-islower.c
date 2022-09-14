#include "main.h"

/**
 * _islower - Check for lowercase character
 * @c: Integer to be checked
 */

int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
