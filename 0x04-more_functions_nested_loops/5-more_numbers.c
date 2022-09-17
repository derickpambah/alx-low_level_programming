#include "main.h"

/**
 * more_numbers - Print 10 times the numbers 0 to 14
 * @void: No arguments passed
 * Return: 10 times the numbers 0 to 14
 */

void more_numbers(void)
{
	int i;
	int n;
	int m;

	n = '0';
	m = (14 + '0');

	for (i = '0'; i <= '9'; i++)
	{
		for (n = '0'; n <= m; n++)
			_putchar(n);
	}
	_putchar('\n');
}
