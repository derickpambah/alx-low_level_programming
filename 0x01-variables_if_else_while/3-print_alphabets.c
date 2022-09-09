#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabets in both lowercase and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char alPHA = 'A';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alPHA = 'A'; alPHA <= 'Z'; alPHA++)
	{
		putchar(alPHA);
	}
	putchar('\n');

	return (0);
}
