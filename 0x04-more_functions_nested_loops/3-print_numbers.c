#include "main.h"

/**
 * print_numbers - Print the numbers from 0 - 9
 * @void: No arguments passed
 * Return: Numbers 0 - 9
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
