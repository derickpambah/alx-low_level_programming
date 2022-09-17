#include "main.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: Number of times to draw the diagonal
 * Return: Diagonal line
 */

void print_diagonal(int n)
{
	int c;

	for (c = 1; c <= n; c++)
	{
		_putchar(92);
	}
	_putchar('\n');
}
