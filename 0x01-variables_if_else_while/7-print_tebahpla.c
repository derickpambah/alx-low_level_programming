#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print lowercase alphabet in reverse
 * followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'z';

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');

	return (0);
}
