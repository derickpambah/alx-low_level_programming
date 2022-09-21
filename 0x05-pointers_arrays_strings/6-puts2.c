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

	while (*(s + 1) != '\0')
	{
		char ch;

		if (count / 2 == 0)
		{
			ch = (char) str;
			_putchar(str);
		}
		count++;
		s++;
	}
	_putchar('\n');
}
