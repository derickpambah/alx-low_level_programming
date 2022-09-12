#include <stdio.h>
/**
 * prin_t - Convert an integer to a type char variable
 * @n: Integer to be converted
 */
void prin_t(int n)
{
	if (n / 10 != 0)
		prin_t(n / 10);
	putchar((n % 10) + '0');
}

/**
 * prin_t2 - Convert the second integer to a type char variable
 * @m: Second integer to be converted
 */
void prin_t2(int m)
{
	if (m / 10 != 0)
		prin_t2(m / 10);
	putchar((m % 10) + '0');
}

/**
 * prin_t3 - Convert the third integer to a type char variable
 * @p: The third integer to be converted
 */
void prin_t3(int p)
{
	if (p / 10 != 0)
		prin_t3(p / 10);
	putchar((p % 10) + '0');
}

/**
 * main - Entry point
 *
 * Description: Print all possible combinations of 3 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, p;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			for (p = 0; p < 10; p++)
			{
				if (n < m && m < p)
				{
					prin_t(n);
					prin_t2(m);
					prin_t3(p);

					if (n != 7 || (n == 7 && m != 8 && p != 9))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
