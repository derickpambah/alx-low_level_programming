#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase excluding letters
 * q and e only using putchar()
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
			continue;
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
