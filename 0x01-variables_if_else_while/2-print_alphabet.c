#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program to print the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
