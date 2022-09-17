#include "main.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: Number of times the line should be drawn
 * Return: A straight line in the terminal
 */

void print_line(int n)
{
	char c;
	char m;

	for (c = 0; c <= n; c++)
	{
		m = c;
		if (n <= 0)
			_putchar('\n');

		if (n > 9)
		{
			_putchar('1');
			m = (n % 10);
		}
		_putchar('_' * m);
	}
	_putchar('\n');
}
