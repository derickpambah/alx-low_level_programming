#include "main.h"

/**
 * void print_alphabet(void) - print alphabet in lowercase
 * @void: nor arguments passed
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
