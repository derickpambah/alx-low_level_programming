#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: String
 *
 * Return: void
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		char ch = (char) *s;

		_putchar(ch);
		--s;
	}
}
