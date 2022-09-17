#include "main.h"

/**
 * print_square - Print a square followed by a new line
 * @size: Size of the square
 * Return: A square
 */

void print_square(int size)
{
	int n;

	for (n = 1; n <= size; n++)
		_putchar('#');
	_putchar('\n');
}
