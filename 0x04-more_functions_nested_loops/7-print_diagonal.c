#include "main.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: Number of times to draw the diagonal
 * Return: Diagonal line
 */

void print_diagonal(int n)
{
	int c;

	if (n == 0 || n < 0)
		_putchar('\n');

	for (c = 1; c <= n; c++)
		_putchar('\\');
	_putchar('\n');
}
