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

	for (i = '0'; i <= '9'; i++)
	{
		for (n = 58; n <= 62; n++)
		{
			_putchar(i);
			_putchar(n);
		}
	}
	_putchar('\n');
}
