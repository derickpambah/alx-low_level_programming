#include "main.h"

/**
 * _isdigit - Check for a digit (0 to 9)
 * @c: Integer to be checked
 *
 * Return: 1 if c is a digit. 0 otherwise.
 */

int _isdigit(int c)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == c)
		{
			_putchar(c);
			_putchar(':');
			_putchar(' ');
			_putchar('1');
		}
		else
		{
			_putchar(c);
			_putchar(':');
			_putchar(' ');
			_putchar(0);
		}
	}

	return (0);
}
