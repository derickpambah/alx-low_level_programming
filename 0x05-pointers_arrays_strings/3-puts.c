#include "main.h"

/**
 * _puts - print a string followed by a new line to stdout
 * @str: String
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		char ch = (char) *str;

		_putchar(ch);
		str++;
	}
	_putchar('\n');
}
