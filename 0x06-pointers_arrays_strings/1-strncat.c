#include "main.h"

/**
 * *_strncat - Concatenate two strings upto n bytes
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
		}
		i++;
	}
	return (0);
}

