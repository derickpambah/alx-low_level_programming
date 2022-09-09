#include <stdio.h>
/**
 * prin_t - Print base 10 single digits
 *
 * @n: set of digits to be output
 */
void prin_t(int n)
{
	if (n / 10 != 0)
		prin_t(n / 10);
	putchar((n % 10) + '0');
}

/**
 * main - Entry point
 *
 * Description: Print all possible comination of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		prin_t(n);
		if (n < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
