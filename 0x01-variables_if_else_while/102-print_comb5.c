#include <stdio.h>
/**
 * prin_t - Convert integer to type char variable
 * @n: Integer to be converted
 */
void prin_t(int n)
{
	if (n / 10 != 0)
		prin_t(n / 10);
	putchar((n % 10) + '0');
}

/**
 * prin_t2 - Convert the second integer to a char variable
 * @m: Second integer to be converted
 */
void prin_t2(int m)
{
	if (m / 10 != 0)
		prin_t2(m / 10);
	putchar((m % 10) + '0');
}

/**
 * prin_t3 - Convert the third integer to a char variable
 * @p: Third integer to be converted
 */
void prin_t3(int p)
{
	if (p / 10 != 0)
		prin_t3(p / 10);
	putchar((p % 10) + '0');
}

/**
 * prin_t4 - Convert fourth integer to a char variable
 * @k: Fourth integer to be converted
 */
void prin_t4(int k)
{
	if (k / 10 != 0)
		prin_t4(k / 10);
	putchar((k % 10) + '0');
}

/**
 * main - Entry point
 *
 * Description: Print all possible combination of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, p, k;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			for (p = 0; p < 10; p++)
			{
				for (k = 0; k < 10; k++)
				{
					if (k != m)
					{
						prin_t(n);
						prin_t2(m);
						prin_t3(p);
						prin_t4(k);
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
