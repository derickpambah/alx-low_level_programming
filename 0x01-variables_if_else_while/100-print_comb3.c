#include <stdio.h>
/**
 * prin_t - Output integers using putchar
 *
 * @n: First set of digits to output
 */
void prin_t(int n)
{
	if (n / 10 != 0)
		prin_t(n / 10);
	putchar((n % 10) + '0');

}

/**
 * prin_t2 - Output integers using putchar
 *
 * @m: Second set of digits to output
 */
void prin_t2(int m)
{
	if (m / 10 != 0)
		prin_t2(m / 10);
	putchar((m % 10) + '0');
}

/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two digits
 * using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = n; m < 10; m++)
		{
			if (n < m)
			{
				prin_t(n);
				prin_t2(m);

				if (n != 8 || (n == 8 && m != 9))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
