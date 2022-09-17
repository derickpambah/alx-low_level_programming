#include "main.h"

/**
 * print_square - Print a square followed by a new line
 * @size: Size of the square
 * Return: A square
 */

void print_square(int size)
{
	int n = 0;

	while (size > n)
	{
		_putchar('#');
		n++;
	}
	_putchar('\n');
}
