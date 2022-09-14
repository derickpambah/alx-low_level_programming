#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print first 50 fibonacci numbers starting from 1 and 2
 * Return: First 50 fibonacci numbers
 */

int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int i;
	long int n3;

	printf("%d, %d, ", n1, n2);

	for (i = 2; i < 50; i++)
	{
		if (i != 49)
		{
			n3 = n1 + n2;
			_putchar('0' + n3);
			_putchar(44);
			_putchar(32);
			n1 = n2;
			n2 = n3;
		}
		else
		{
			n3 = n1 + n2;
			_putchar('0' + n3);
		}
	}
	return (0);
}
