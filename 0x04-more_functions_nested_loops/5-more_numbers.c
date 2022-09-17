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

	for (i = '0'; i <= '9'; i++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			_putchar(m);
		}

		for (n = 58; n <= 62; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
