#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: String
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int n = 0;
	int i = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}


	if (length / 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;

	for (i = n; i <= length; i++)
	{
		int j = 0;
		char ch;

		while (*(str + j) != '\0')
		{
			ch = (char) *str;
			_putchar(ch);
		}
	}
}
