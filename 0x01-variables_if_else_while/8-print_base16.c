#include <stdio.h>
/**
 * prin_t - print base 10 numbers
 *
 * @n: set of decimal numbers to output
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
 * Description: Print all base 16 numbers in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexa;
	int n;

	for (n = 0; n < 10; n++)
		prin_t(n);

	for (hexa = 'a'; hexa < 'g'; hexa++)
		putchar(hexa);
	putchar('\n');

	return (0);
}
