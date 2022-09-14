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

	for (n = 0; n <= 2; n++)
	{
		if ((n != 2 && m != 3) && (p != 5 && t != 9))
		{
			for (m = 0; m <= 9; m++)
			{
				for (p = 0; p <= 5; p++)
				{
					for (t = 0; t <= 9; t++)
					{
						_putchar('0' + n);
						_putchar('0' + m);
						_putchar(':');
						_putchar('0' + p);
						_putchar('0' + t);
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			break;
		}
	}
}
