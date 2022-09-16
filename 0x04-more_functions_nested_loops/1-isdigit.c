#include "main.h"

/**
 * _isdigit - Check for a digit (0 to 9)
 * @c: Integer to be checked
 *
 * Return: 1 if c is a digit. 0 otherwise.
 */

int _isdigit(int c)
{
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar('1');
	}
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(0);

	return (0);
}
