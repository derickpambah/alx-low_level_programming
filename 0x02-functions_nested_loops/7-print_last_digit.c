#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @c: Integer to be computed
 * Return: Last digit
 */

int print_last_digit(int c)
{
	int result;

	result = c % 10;
	if (result < 0)
		result = -result;

	_putchar(result + '0');

	return (result);
}
