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
	int dest_len = 0;

	while (dest[i++])
		dest_len++;

	while (n--)
		dest[dest_len++] = src[i];

	return (dest);
}
