#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: String
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *str_ptr = s;

	while (*(str_ptr + 1) != '\0')
		str_ptr++;

	while (str_ptr > s)
	{
		char temp = *str_ptr;
		*str_ptr-- = *s;
		*s++ = temp;
	}
}
