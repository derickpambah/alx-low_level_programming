#include "main.h"

/**
 * more_numbers - Print 10 times the numbers 0 to 14
 * @void: No arguments passed
 * Return: 10 times the numbers 0 to 14
 */

void more_numbers(void)
{
	int i;
	char n;
	char m;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n < 15; n++)
		{
			m = n;
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				m = ((n % 10) + '0');
			}
			_putchar('0' + m);
		}
		_putchar('\n');
	}
}
