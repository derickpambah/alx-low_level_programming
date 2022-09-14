#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @c: Integer to be computed
 * Return: Last digit
 */

int print_last_digit(long int c)
{
	if (c < 0)
		c = -c;

	c = c % 10;
	_putchar('0' + c);

	return (c);
}
