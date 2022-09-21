#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: String
 *
 * Return: int (length of a string)
 */
int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * print_rev - Print a string in reverse
 * @s: String
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length, i;
	char *begin, *end, ch;

	length = _strlen(s);

	begin = s;
	end = s;

	for (i = 0; i < (length - 1); i++)
		end++;

	for (i = 0; i < (length / 2); i++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;

		begin++;
		end--;
	}
}
