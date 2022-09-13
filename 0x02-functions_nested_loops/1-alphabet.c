#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
