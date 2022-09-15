#include "main.h"

/**
 * _isupper - Check for uppercase character
 * @c: Integer to be checked
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		_putchar(c);
		_putchar(' ');
		return (1);
	}
	_putchar(c);
	_putchar(' ');
	return (0);
}
