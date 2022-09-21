#include "main.h"

/**
 * puts2 - print some characters of a string
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	char *s = str;
	int count = 0;
	int n = 0;

	while (*(s + 1) != '\0')
	{
		if ((n >= 0 && n <= count) && (n / 2 == 0))
		{
			char ch = (char) *str;

			_putchar(ch);
		}
		count++;
		s++;
	}
	_putchar('\n');
}
