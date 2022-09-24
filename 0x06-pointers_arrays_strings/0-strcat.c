#include "main.h"

/**
 * *_strcat - Concatenate two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len_dest = 0;

	while (dest[i++])
		len_dest++;

	for (i = 0; src[i]; i++)
		dest[len_dest++] = src[i];

	return (dest);
}
