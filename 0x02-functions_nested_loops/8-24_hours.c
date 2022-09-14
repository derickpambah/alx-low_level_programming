#include "main.h"

/**
 * jack_bauer - Print every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 * @void: No arguments passed
 * Return: Every minute of Jack_Bauer
 */

void jack_bauer(void)
{
	int n, m, p, t;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			_putchar(':');
			for (p = 0; p <= 9; p++)
			{
				for (t = 0; t <= 9; t++)
				{
					_putchar('0' + t);
					_putchar('\n');
				}
			}
		}
	}
}
