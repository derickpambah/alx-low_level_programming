#include <stdio.h>
/**
 * prin_t - print long int number using putchar
 *
 * @n: A set of single integers to be output
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
 * Description: Print all single digit numbers of base 10
 * starting from 0 using only putchar()
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		prin_t(n);
		n++;
	}
	putchar('\n');

	return (0);
}
