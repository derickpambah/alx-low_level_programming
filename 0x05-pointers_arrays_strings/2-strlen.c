#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: String
 *
 * Return: int (size of string in bytes)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
